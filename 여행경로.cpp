//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//vector<string> DFS(map<string, vector<string>> & m,map<string,map<string,int>> & visit,
//    vector<string> curPath, const string & curLocation, const int ticketNum)
//{    
//    if (ticketNum + 1 == curPath.size())
//        return curPath;
//
//    vector<string> destVec = m[curLocation];
//    size_t size = destVec.size();
//    for (size_t i = 0; i < size; ++i)
//    {
//        if (visit[curLocation][destVec[i]]==0)
//            continue;
//
//        --visit[curLocation][destVec[i]];
//        curPath.push_back(destVec[i]);
//        vector<string> v = DFS(m, visit, curPath, destVec[i], ticketNum);
//        if (v.size() == ticketNum + 1)
//            return v;
//        ++visit[curLocation][destVec[i]];
//        curPath.pop_back();
//    }
//    return curPath;
//}
//
//vector<string> solution(vector<vector<string>> tickets) {
//    vector<string> answer;
//    map<string, vector<string>> m;
//
//    map<string, map<string, int>> visit;
//    size_t size = tickets.size();
//    for (size_t i = 0; i < size; ++i)
//    {
//        m[tickets[i][0]].push_back(tickets[i][1]);
//
//        string startLocation = tickets[i][0];
//        string endLocation = tickets[i][1];
//
//        ++visit[startLocation][endLocation];
//    }
//
//    for (auto& v : m)
//    {
//        sort(v.second.begin(), v.second.end());
//    }
//
//    vector<string> curPath = { "ICN" };
//    vector<string> result = DFS(m, visit, curPath, "ICN", size);
//
//    return result;
//}
//
//int main()
//{
//    vector<vector<string>> tickets = { {"ICN", "AAA"} ,{"ICN", "CCC"},
//        {"CCC", "DDD"},{"AAA", "BBB"},{"AAA", "BBB"},{"DDD", "ICN"},{"BBB", "AAA"} };
//    solution(tickets);
//
//    return 0;
//}