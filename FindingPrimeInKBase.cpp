//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool IsPrimeNumber(long Num)
//{
//    if (Num < 2)
//        return false;
//
//    for (long i = 2; i <= sqrt(Num); ++i)
//    {
//        if (Num % i == 0)
//            return false;
//    }
//    return true;
//}
//
//int solution(int n, int k) {
//    int answer = 0;
//
//    long long curNum = 0;
//    while (n != 0)
//    {
//        long long remain = n % k;
//        long long exp = 0;
//        curNum = 0;
//        while (true)
//        {
//            if (remain == 0)
//            {          
//                if (IsPrimeNumber(curNum))
//                    ++answer;
//                n /= k;
//                break;
//            }
//            else
//            {
//                curNum += pow(10, exp) * remain;
//                ++exp;
//                n /= k;
//                remain = n % k;
//            }    
//        }
//    }
//    return answer;
//}
//
//int main()
//{
//    solution(797161, 3);
//
//    return 0;
//}