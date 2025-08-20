//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int DFS(const vector<vector<int>>& graph)
//{
//	vector<bool> visit(graph.size(), false);
//	stack<int> s;
//	s.push(1);
//	int count = 0;
//
//	while (!s.empty())
//	{
//		int top = s.top();
//		s.pop();
//		if (visit[top])
//			continue;
//
//		visit[top] = true;
//		++count;
//
//		int size = graph[top].size();
//		for (int i = 0; i < size; ++i)
//		{
//			int targetIdx = graph[top][i];
//			if (!visit[targetIdx])
//				s.push(targetIdx);
//		}
//	}
//	return count - 1;
//}
//
//int main()
//{
//	int ComputerNum, E;
//	cin >> ComputerNum >> E;
//
//	vector<vector<int>> graph(ComputerNum + 1,vector<int>());
//	for (int i = 0; i < E; ++i)
//	{
//		int s, e;
//		cin >> s >> e;
//		graph[s].push_back(e);
//		graph[e].push_back(s);
//	}
//
//	cout << DFS(graph);
//
//	return 0;
//}