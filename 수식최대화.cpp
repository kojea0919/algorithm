#include <string>
#include <vector>
#include <stack>

using namespace std;

void Permutation(vector<string>& operatorPriority, string curPriority, vector<bool> & visit,const string & operatorStr,int k)
{
    if (curPriority.size() == k)
    {
        operatorPriority.push_back(curPriority);
        return;
    }

    size_t size = operatorStr.size();
    for (size_t i = 0; i < size; ++i)
    {
        if (visit[i])
            continue;

        visit[i] = true;
        Permutation(operatorPriority, curPriority + operatorStr[i], visit, operatorStr,k);
        visit[i] = false;
    }
}

long long solution(string expression) {
    long long answer = 0;

    string operatorStr;
    char operatorArr[3] = { '*','+','-' };
    
    for (int i = 0; i < 3; ++i)
    {
        if (expression.find(operatorArr[i]) != string::npos)
        {
            operatorStr.push_back(operatorArr[i]);
        }
    }

    vector<string> operatorPriority;
    vector<bool> visit(operatorStr.size(), false);
    Permutation(operatorPriority, "", visit, operatorStr, operatorStr.size());
    
    vector<long long> numberVec;
    vector<char> operVec;
    size_t size = expression.size();
    string numberStr;
    for (size_t i = 0; i < size; ++i)
    {
        char c = expression[i];
        if (c >= '0' && c <= '9')
        {
            numberStr += c;
        }
        else
        {
            numberVec.push_back(atoll(numberStr.c_str()));
            numberStr.clear();
            operVec.push_back(c);
        }
    }
    numberVec.push_back(atoll(numberStr.c_str()));
        
    size = operatorPriority.size();
    for (size_t i = 0; i < size; ++i)
    {
        string curPriority = operatorPriority[i];
        size_t len = curPriority.size();        

        vector<long long> copyNumberVec = numberVec;
        vector<char> copyOperVec = operVec;
        vector<long long> newNumberVec = { numberVec[0] };
        vector<char> newOper = {};

        for (size_t priorityIdx = 0; priorityIdx < len; ++priorityIdx)
        {
            char target = curPriority[priorityIdx];
            size_t operVecSize = copyOperVec.size();
            for (size_t operVecIdx = 0; operVecIdx < operVecSize; ++operVecIdx)
            {
                if (target == copyOperVec[operVecIdx])
                {
                    long long left = newNumberVec.back();
                    newNumberVec.pop_back();
                    long long right = copyNumberVec[operVecIdx + 1];
                    long long result;

                    if (copyOperVec[operVecIdx] == '*') result = left * right;
                    else if (copyOperVec[operVecIdx] == '+') result = left + right;
                    else if (copyOperVec[operVecIdx] == '-') result = left - right;

                    newNumberVec.push_back(result);
                }
                else
                {
                    newOper.push_back(copyOperVec[operVecIdx]);
                    newNumberVec.push_back(copyNumberVec[operVecIdx + 1]);
                }
            }
            copyNumberVec = newNumberVec;
            copyOperVec = newOper;
            newOper.clear();
            newNumberVec.clear();
            newNumberVec.push_back(copyNumberVec[0]);
        }

        long long cost = abs(copyNumberVec[0]);
        if (answer < cost)
            answer = cost;
    }

    return answer;
}

int main()
{
    solution("50*6-3*2");
    return 0;
}