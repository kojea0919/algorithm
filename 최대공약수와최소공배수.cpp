//#include <string>
//#include <vector>
//
//using namespace std;
//
//int Gcd(int a, int b)
//{
//    int r = a % b;
//
//    while (r != 0)
//    {
//        a = b;
//        b = r;
//        r = a % b;
//    }
//    return b;
//}
//
//vector<int> solution(int n, int m) {
//    vector<int> answer;
//
//    int gcd = Gcd(n, m);
//    answer.push_back(gcd);
//    answer.push_back(n * m / gcd);
//
//    return answer;
//}
//
//int main()
//{
//    gcd(2, 5);
//
//    return 0;
//}