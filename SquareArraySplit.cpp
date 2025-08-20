//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int n, long long left, long long right) {
//    vector<int> answer;
//
//    
//    for (long long i = left; i <= right; ++i)
//    {
//        int RowIdx = i / n;
//        int ColIdx = i % n;
//
//        if (ColIdx <= RowIdx)
//            answer.push_back(RowIdx + 1);
//        else
//            answer.push_back(ColIdx + 1);
//    }
//
//    return answer;
//}
//
//#include <iostream>
//
//int main()
//{
//    solution(10000000, 60, 90000);
//    return 0;
//}