//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//using namespace std;
//
//int solution(int N, vector<vector<int> > road, int K) {
//    int answer = 0;
//
//    vector<int> dist(N + 1, INT_MAX);
//    dist[1] = 0;
//    int size = road.size();
//    vector<vector<int>> graph(N+1,vector<int>(N+1, INT_MAX));
//
//    for (int i = 0; i < size; ++i)
//    {
//        int town1 = road[i][0];
//        int town2 = road[i][1];
//        int len = road[i][2];
//        len = min(graph[town2][town1],len);
//
//        graph[town1][town2] = len;
//        graph[town2][town1] = len;
//    }
//
//    priority_queue<pair<int, int>,vector<pair<int,int>>,greater<>> pq;
//    pq.push(make_pair(0, 1));
//    while (!pq.empty())
//    {
//        pair<int,int> p = pq.top();
//        pq.pop();
//        int len = p.first;
//        int townNum = p.second;
//
//        for (int i = 1; i <= N; ++i)
//        {
//            if (i == townNum || graph[i][townNum] == INT_MAX)
//                continue;
//
//            int newDist = len + graph[i][townNum];
//            if (dist[i] > newDist)
//            {
//                pq.push(make_pair(newDist,i));
//                dist[i] = newDist;
//            }
//        }
//    }   
//    for (int i = 1; i <= N; ++i)
//    {
//        if (dist[i] <= K)
//            ++answer;
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<vector<int>> road1 = { {1, 2, 1},{2, 3, 3},{5, 2, 2},{1, 4, 2},{5, 3, 1},{5, 4, 2} };
//    vector<vector<int>> road2 = { {1, 2, 1},{1, 3, 2},{2, 3, 2},{3, 4, 3}, {3, 5, 2},{3, 5, 3},{5, 6, 1} };
//    vector<vector<int>> road3 = { {1,2,3},{2,3,1},{1,2,2} };
//    vector<vector<int>> road4 = { {1,2,2} ,{2,3,2},{3,4,2},{4,5,2},{5,6,2},{6,7,2} };
//    vector<vector<int>> road5 = { {1,2,1} ,{1,3,2},{3,4,3},{4,5,4},{5,6,5} };
//    vector<vector<int>> road6 = { {1,2,1},{2,3,1} };
//    vector<vector<int>> road7 = { {1,5,100},{1,2,1},{2,3,1},{4,5,1},{3,4,1} };
//    //solution(5, road1, 3);
//    //solution(6, road2, 4);
//   // solution(3, road3, 3);
//   // solution(7, road4, 6);
//   // solution(6, road5, 5);
//   // solution(3, road6, 2);
//    solution(5, road7, 4);
//
//    return 0;
//}