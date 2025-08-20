//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int n, long long k) {
//    vector<int> answer;
//    vector<long long> factorial;
//    vector<bool> visit(n,false);
//    factorial.push_back(1);
//    factorial.push_back(1);
//    for (int i = 2; i <= n; ++i)
//    {
//        factorial.push_back(factorial[i - 1] * i);
//    }
//
//    int curN = n;
//    while (true)
//    {
//        if (answer.size() == n)
//        {
//            break;
//        }
//
//        long long factorialValue = factorial[curN - 1];
//        for (int i = 0; i < curN; ++i)
//        {
//            if (i * factorialValue + 1 <= k &&
//                k <= factorialValue * (i + 1))
//            {
//                int count = 0;
//                int curNum = 0;
//                for (; curNum < n; ++curNum)
//                {
//                    if (!visit[curNum])
//                    {
//                        ++count;
//                        if (count == i + 1)
//                            break;
//                    }
//                }
//
//                visit[curNum] = true;
//                answer.push_back(curNum + 1);
//                k -= i * factorialValue;
//                --curN;
//          
//                break;
//            }
//        }
//    }
//    return answer;
//}
//
//int main()
//{
//    for (int i = 1; i <= 120; ++i)
//    {
//        vector<int> a = solution(5, i);
//        int aa = 10;
//    }
//
//
//    return 0;
//}