//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int solution(string s) {
//    int answer = 0;
//
//    int RotationNum = s.size();
//
//    stack<char> ParentheseStack;
//
//    string newS = s;
//    for (int RotationCnt = 0; RotationCnt < RotationNum; ++RotationCnt)
//    {
//        bool IsRight = true;
//        for (int Idx = 0; Idx < RotationNum; ++Idx)
//        {
//
//            char CurChar = newS[Idx];
//            if (CurChar == '[' || CurChar == '{' || CurChar == '(')
//                ParentheseStack.push(CurChar);
//            else if(!ParentheseStack.empty())
//            {              
//                char PrevLeftParenthese = ParentheseStack.top();
//                ParentheseStack.pop();
//
//                char RightChar;
//                if (CurChar == ']')
//                    RightChar = '[';
//                else if (CurChar == '}')
//                    RightChar = '{';
//                else
//                    RightChar = '(';
//
//                if (RightChar != PrevLeftParenthese)
//                    IsRight = false;
//            }
//            else
//            {
//                IsRight = false;
//                break;
//            }
//        }
//
//        if (IsRight && ParentheseStack.empty())
//            ++answer;
//
//        newS.clear();
//        newS += s.substr(RotationCnt + 1, RotationNum-1);
//        newS += s.substr(0, RotationCnt + 1);
//    }
//    return answer;
//}
//
//int main()
//{
//    string s = "}}}";
//
//    int a = solution(s);
//
//    return 0;
//}