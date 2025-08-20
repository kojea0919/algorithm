//#include <string>
//#include <vector>
//
//using namespace std;
//
//int gcd(int a,int b)
//{
//    int r = 1;
//    while (b != 0)
//    {
//        r = a % b;
//        a = b;
//        b = r;
//    }
//    return a;
//}
//
//int solution(vector<int> arrayA, vector<int> arrayB) {
//    int answer = 0;
//
//    int gcdA = arrayA[0];
//    int gcdB = arrayB[0];
//
//    int size = arrayA.size();
//    for (int i = 1; i < size; ++i)
//    {
//        gcdA = gcd(gcdA, arrayA[i]);
//        gcdB = gcd(gcdB, arrayB[i]);
//    }
//
//    bool canA = true;
//    bool canB = true;
//    if (gcdA != 1)
//    {
//        for (int i = 0; i < size; ++i)
//        {
//            if (arrayB[i] % gcdA == 0)
//                canA = false;
//        }
//    }
//    else
//        canA = false;
//
//    if (gcdB != 1)
//    {
//        for (int i = 0; i < size; ++i)
//        {
//            if (arrayA[i] % gcdB == 0)
//                canB = false;
//        }
//    }
//    else
//        canB = false;
//
//    if (canA && canB)
//        return max(gcdA, gcdB);
//    else if (canA)
//        return gcdA;
//    else if (canB)
//        return gcdB;
//   
//    return 0;
//}
//
//int main(void) {
//    vector<int> arrayA = { 14, 35,119 };
//    vector<int> arrayB = { 18,30,102 };
//
//    int a = solution(arrayA, arrayB);
//    return 0;
//}