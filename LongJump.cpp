//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//
//long long solution2(int n) {
//    long long answer = 0;
//    int n2 = 2, n3 = 3;
//
//    if (n <= 3) return n;
//    for (int i = 4; i <= n; ++i) {
//        answer = (n2 + n3) % 1234567;
//        n2 = n3;
//        n3 = answer;
//    }
//    return answer;
//}
//
////µ¿Àû °èÈ¹¹ý
//long long solution(int n) {
//    long long answer = 0;
//
//    long long prevprev = 1;
//    long long prev = 2;
//
//    if (n == 1)
//        return prevprev;
//    else if (n == 2)
//        return prev;
//
//    for (int i = 2; i < n; ++i)
//    {
//        long long temp = prevprev;
//        prevprev = prev;
//        prev = (prev + temp) % 1234567;
//    }
//
//    return prev;
//}
//
//int main()
//{
//    solution(92);
//    solution2(92);
//
//    for (int i = 7; i < 100; ++i)
//    {
//        if (solution(i) != solution2(i))
//        {
//            int a = 10;
//        }
//    }
//    return 0;
//}