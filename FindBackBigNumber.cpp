#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {

    stack<int> s;
    int size = numbers.size();
    s.push(numbers[size - 1]);

    vector<int> answer(size,-1);

    for (int idx = size - 2; idx >= 0; --idx)
    {
        int curNumber = numbers[idx];

        while (!s.empty())
        {
            int stackNumber = s.top();
            s.pop();

            if (stackNumber > curNumber)
            {
                answer[idx] = stackNumber;
                s.push(stackNumber);
                break;
            }
        }

        s.push(curNumber);
    }


    return answer;
}

vector<int> solution1(vector<int> numbers) {
    size_t size = numbers.size();
    vector<int> answer(size,-1);

    vector<vector<int>> indexVec(1000000);

    for (size_t idx = 0; idx < size; ++idx)
    {
        int curNum = numbers[idx];
        indexVec[curNum].push_back(idx);

        for (size_t i = 1; i < curNum; ++i)
        {
            size_t indexVecSize = indexVec[i].size();
            for (size_t j = 0; j < indexVecSize; ++j)
                answer[indexVec[i][j]] = curNum;
            indexVec[i].clear();
        }
    }


    return answer;
}

int main()
{
    vector<int> testcase = { 9,1,5,3,6,2 };
    solution(testcase);

    testcase.clear();
    testcase = { 9,1,2,3,4,5,6 };
    solution(testcase);

    return 0;
}