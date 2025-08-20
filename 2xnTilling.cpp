//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//    if (n == 1)
//        return 1;
//    else if (n == 2)
//        return 2;
//
//    vector<int> fibo;
//    fibo.push_back(1);
//    fibo.push_back(2);
//
//    int curNum = 0;
//    for (int i = 2; i < n; ++i)
//    {
//        curNum = (fibo[i - 1] + fibo[i - 2]) % 1000000007;
//        fibo.push_back(curNum);
//    }
//
//    return curNum;
//}
//
////피보나치로 하면 됨
//
//int main()
//{
//    solution(7);
//
//    return 0;
//}