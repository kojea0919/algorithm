//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(string s) {
//    vector<int> answer;
//    
//
//    size_t BinaryCount = 0;
//    size_t RemoveCount = 0;
//    while (true)
//    {
//        size_t Len = s.length();
//        if (Len == 1)
//            break;
//
//        size_t CurX = 0;
//        size_t curRemoveCount = 0;
//        for (size_t i = 0; i < Len; ++i)
//        {
//            char CurData = s[i];
//            if (CurData == '1')
//                ++CurX;
//        }
//        size_t CurRemoveCount = Len - CurX;
//        RemoveCount += CurRemoveCount;
//       
//        int CurValue = CurX;
//        s.clear();
//        for (int i = CurValue; i > 1; i /= 2)
//        {
//            int R = i % 2;
//            s.push_back(R + '0');
//        }
//        s.push_back('1');
//        ++BinaryCount;
//    }
//
//    answer.push_back(BinaryCount);
//    answer.push_back(RemoveCount);
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> test = solution("1111111");
//    return 0;
//}
//
