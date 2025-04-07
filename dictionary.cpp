#include <string>
#include <vector>

using namespace std;

bool SearchDictionary(string curStr, const string & targetStr,int & answer)
{
    if (curStr == targetStr) 
        return true;
    if (curStr.size() == 5)
        return false;

    if (SearchDictionary(curStr + "A", targetStr, ++answer))
        return true;
    if (SearchDictionary(curStr + "E", targetStr, ++answer))
        return true;
    if (SearchDictionary(curStr + "I",targetStr,++answer))
        return true;
    if (SearchDictionary(curStr + "O", targetStr, ++answer))
        return true;
    if (SearchDictionary(curStr + "U", targetStr, ++answer))
        return true;

    return false;
}

int solution(string word) {
    int answer = 0;
    SearchDictionary("", word, answer);

    return answer;
}


int main()
{
    int test = solution("I");
    return 0;
}