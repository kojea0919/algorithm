#include <string>
#include <map>
#include <set>


using namespace std;

int solution(string str1, string str2) {
    set<string> intersectStringSet;
    map<string,int> str1Map;
    size_t loopSize = str1.size() - 1;

    int numOf1 = 0;

    for (size_t idx = 0; idx < loopSize; ++idx)
    {
        string newStr = str1.substr(idx, 2);

        if (newStr[0] >= 'A' && newStr[0] <= 'Z')
        {
            newStr[0] += 32;
        }
        else if (newStr[0] < 'a' || newStr[0] > 'z')
            continue;

        if (newStr[1] >= 'A' && newStr[1] <= 'Z')
            newStr[1] += 32;
        else if (newStr[1] < 'a' || newStr[1] > 'z')
            continue;
         
        ++numOf1;
        ++str1Map[newStr];
    }

    loopSize = str2.size() - 1;
    map<string, int> str2Map;
    int numOf2 = 0;
    for (size_t idx = 0; idx < loopSize; ++idx)
    {
        string newStr = str2.substr(idx, 2);

        if (newStr[0] >= 'A' && newStr[0] <= 'Z')
            newStr[0] += 32;
        else if (newStr[0] < 'a' || newStr[0] > 'z')
            continue;

        if (newStr[1] >= 'A' && newStr[1] <= 'Z')
            newStr[1] += 32;
        else if (newStr[1] < 'a' || newStr[1] > 'z')
            continue;

        if (str1Map[newStr] >= 1)
            intersectStringSet.insert(newStr);
        ++str2Map[newStr];
        ++numOf2;
    }
    if (numOf2 == 0 && numOf1 == 0)
        return 65536;

   
    int numOfIntersection = 0;
    for (auto iter = intersectStringSet.begin(); iter != intersectStringSet.end(); ++iter)
    {
        string curStr = *iter;

        numOfIntersection += min(str1Map[curStr], str2Map[curStr]);
    }
   

    int numOfSum = numOf1 + numOf2 - numOfIntersection;
    int answer = numOfIntersection / (float)numOfSum * 65536;
    return answer;
}

int main()
{
    string str1 = "E=M*C^2";
    string str2 = "e=m*c^2";

    solution(str1, str2);

    return 0;
}