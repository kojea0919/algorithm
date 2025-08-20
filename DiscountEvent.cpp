//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//int solution(vector<string> want, vector<int> number, vector<string> discount) {
//    int answer = 0;
//
//    map<string, int> discountMap;
//    map<string, int>::iterator endIter = discountMap.end();
//    for (int i = 0; i < 10; ++i)
//    {
//        string CurDiscount = discount[i];
//
//        if (discountMap.find(CurDiscount) == endIter)
//            discountMap[CurDiscount] = 1;
//        else
//            ++discountMap[CurDiscount];
//    }
//
//
//    int discountSize = discount.size();
//    int loopSize = discountSize - 10;
//
//    int wantSize = want.size();
//    for (int startIdx = 0; startIdx <= loopSize; ++startIdx)
//    {
//        bool IsOk = true;
//        for (int wantIdx = 0; wantIdx < wantSize; ++wantIdx)
//        {
//            int discountCount = discountMap[want[wantIdx]];
//            if (discountCount < number[wantIdx])
//            {
//                IsOk = false;
//                break;
//            }
//        }
//        if (IsOk)
//            ++answer;
//
//        if (startIdx < loopSize)
//        {
//            --discountMap[discount[startIdx]];
//            ++discountMap[discount[startIdx + 10]];
//        }
//    }
//
//
//    return answer;
//}
//
//using namespace std;
//
//int main()
//{
//    vector<string> want = { "banana", "apple", "rice", "pork", "pot" };
//    vector<int> number = { 3,2,2,2,1 };
//    vector<string> discount = { "chicken", "apple", "apple", "banana", "rice", "apple", "pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana" };
//
//    int result = solution(want, number, discount);
//
//
//	return 0;
//}