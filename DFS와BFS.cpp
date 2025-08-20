//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//void DFS_REC(const vector<vector<int>>& graph, vector<bool> & visit, int curIdx)
//{
//	cout << curIdx << " ";
//	visit[curIdx] = true;
//
//	int size = graph[curIdx].size();
//	if (size == 0)
//		return;
//
//	for (int i = 0; i < size; ++i)
//	{
//		int targetIdx = graph[curIdx][i];
//		if (!visit[targetIdx])
//			DFS_REC(graph, visit, targetIdx);
//	}
//}
//
//void DFS(const vector<vector<int>>& graph, int startIdx)
//{
//	vector<bool> visit(graph.size() + 1, false);
//
//	DFS_REC(graph, visit, startIdx);
//}
//
//void BFS(const vector<vector<int>>& graph,int startIdx)
//{
//	vector<bool> visit(graph.size() + 1, false);
//
//	queue<int> q;
//	q.push(startIdx);
//	visit[startIdx] = true;
//
//	while (!q.empty())
//	{
//		int cur = q.front();
//		cout << cur << " ";
//		q.pop();
//		int size = graph[cur].size();
//		for (int i = 0; i < size; ++i)
//		{
//			int targetIdx = graph[cur][i];
//			if (!visit[targetIdx])
//			{
//				q.push(targetIdx);
//				visit[targetIdx] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int N, M, V;
//	cin >> N >> M >> V;
//	vector<vector<int>> graph(N + 1,vector<int>());
//
//	for (int i = 0; i < M; ++i)
//	{
//		int s, e;
//		cin >> s >> e;
//		graph[s].push_back(e);
//		graph[e].push_back(s);
//	}
//
//	DFS(graph, V);
//	cout << endl;
//	BFS(graph, V);
//
//	return 0;
//}