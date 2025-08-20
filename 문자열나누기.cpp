//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string s) {
//    int answer = 0;
//
//    int size = s.size();
//    int startIdx = 0;
//    int sameNum = 1;
//    for (int i = 1; i < size; ++i)
//    {
//        if (s[startIdx] != s[i])
//            --sameNum;
//        else
//            ++sameNum;
//
//        if (sameNum == 0)
//        {
//            ++answer;
//            startIdx = i + 1;
//            i = startIdx;
//            sameNum = 1;
//        }
//    }
//    if (startIdx < size)
//        ++answer;
//
//    return answer;
//}
//
//int main()
//{
//    int a = solution("banana");
//
//    return 0;
//}