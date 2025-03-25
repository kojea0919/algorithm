//#include <string>
//#include <vector>
//#include <list>
//
//using namespace std;
//
//int solution(vector<int> players, int m, int k) {
//    int answer = 0;
//    
//    size_t TotalTime = players.size();
//    list<size_t> ServerList;
//    vector<size_t> Server(k,0);
//    size_t ServerCnt = 0;
//
//    for (size_t Time = 0; Time < TotalTime; ++Time)
//    {
//        ServerCnt -= Server[0];
//        for (int i = 0; i < k - 1; ++i)
//        {
//            Server[i] = Server[i + 1];
//        }
//        Server[k - 1] = 0;
//
//        int CurPlayerCnt = players[Time];
//        size_t NeedServerCnt = CurPlayerCnt / m;
//        int AddServerCnt = NeedServerCnt - ServerCnt;
//
//        if (AddServerCnt > 0)
//        {
//            answer += AddServerCnt;
//            Server[k - 1] += AddServerCnt;
//            ServerCnt += AddServerCnt;
//        }
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> testcase1;
//    testcase1.push_back(0);
//    testcase1.push_back(2);
//    testcase1.push_back(3);
//    testcase1.push_back(3);
//    testcase1.push_back(1);
//    testcase1.push_back(2);
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//    testcase1.push_back(4);
//    testcase1.push_back(2);
//    testcase1.push_back(0);
//    testcase1.push_back(6);
//    testcase1.push_back(0);
//    testcase1.push_back(4);
//    testcase1.push_back(2);
//    testcase1.push_back(13);
//    testcase1.push_back(3);
//    testcase1.push_back(5);
//    testcase1.push_back(10);
//    testcase1.push_back(0);
//    testcase1.push_back(1);
//    testcase1.push_back(5);
//
//    int Result = solution(testcase1, 3, 5);
//
//    testcase1.clear();
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//    testcase1.push_back(10);
//    testcase1.push_back(0);
//    testcase1.push_back(12);
//    testcase1.push_back(0);
//    testcase1.push_back(15);
//    testcase1.push_back(0);
//    testcase1.push_back(1);
//    testcase1.push_back(0);
//    testcase1.push_back(1);
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//    testcase1.push_back(5);
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//    testcase1.push_back(11);
//    testcase1.push_back(0);
//    testcase1.push_back(8);
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//    testcase1.push_back(0);
//
//    Result = solution(testcase1, 5, 1);
//
//	return 0;
//}
