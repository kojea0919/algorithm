//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<long long> solution(vector<long long> numbers) {
//    vector<long long> answer;
//
//    size_t size = numbers.size();
//
//    for (size_t idx = 0; idx < size; ++idx)
//    {
//        long long curNum = numbers[idx];
//
//        if (curNum % 2 == 0)
//            answer.push_back(curNum + 1);
//
//        else
//        {
//            int curBitPosIdx = 0;
//            long long curBitPos = 0x01;
//            while (curBitPos < curNum)
//            {                
//                bool isOne = curBitPos & curNum;
//                if (!isOne)
//                {                   
//                    break;
//                }
//
//                curBitPos = curBitPos << 1;
//                ++curBitPosIdx;
//            }
//
//            long long prevPow = (long long)pow(2, curBitPosIdx - 1);
//            long long curPow = (long long)pow(2, curBitPosIdx);
//            answer.push_back(curNum - prevPow + curPow);
//        }
//
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<long long> testcase = { 3, 9 };
//    solution(testcase);
//
//    return 0;
//}