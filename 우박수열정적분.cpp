//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<double> solution(int k, vector<vector<int>> ranges) {
//    vector<double> answer;
//    vector<pair<int, int>> graph;
//
//    int n = 0;
//    while (k != 1)
//    {
//        graph.push_back(make_pair(n, k));
//        k = k % 2 == 1 ? k * 3 + 1 : k / 2;
//        ++n;
//    }
//    graph.push_back(make_pair(n, k));
//
//    vector<double> extent;
//    for (int i = 0; i < n; ++i)
//    {
//        extent.push_back((graph[i].second + graph[i + 1].second) / 2.0);
//    }
//
//    int size = ranges.size();
//    for (int i = 0; i < size; ++i)
//    {
//        int a = ranges[i][0];
//        int b = n + ranges[i][1];
//
//        if (a > b)
//            answer.push_back(-1);
//        else if (a == b)
//            answer.push_back(0);
//        else
//        {
//            double sum = 0;
//            for (int interval = a; interval < b; ++interval)
//            {
//                sum += extent[interval];
//            }
//            answer.push_back(sum);
//        }
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<vector<int>> ranges = { {0,0} ,{0,-1},{2,-3},{3,-3} };
//
//    solution(5, ranges);
//    return 0;
//}