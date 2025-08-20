//#include <string>
//#include <vector>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
//
//stack<string> st;
//
//int DFS(vector<vector<string>> tickets, vector<bool>& visited, string start)
//{
//    for (int i = 0; i < tickets.size(); ++i)
//    {
//        if (!visited[i])
//        {
//            if (tickets[i][0] == start)
//            {
//                visited[i] = true;
//                DFS(tickets, visited, tickets[i][1]);
//                st.push(tickets[i][1]);
//            }
//        }
//    }
//    return 0;
//}
//
//bool compare(vector<string> a, vector<string> b)
//{
//    return a[1] < b[1];
//}
//
//
//vector<string> solution(vector<vector<string>> tickets) {
//    vector<string> answer;
//    vector<bool> visited;
//
//    for (int i = 0; i < tickets.size(); ++i)
//        visited.push_back(false);
//
//    sort(tickets.begin(), tickets.end(), compare);
//
//    DFS(tickets, visited, "ICN");
//
//    answer.push_back("ICN");
//    while (!st.empty())
//    {
//        answer.push_back(st.top());
//        st.pop();
//    }
//
//    return answer;
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