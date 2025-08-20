//#include <string>
//#include <vector>
//#include <cmath>
//#include <queue>
//
//using namespace std;
//
//struct SearchInfo
//{
//	int wIdx;
//	int hIdx;
//	int size;
//
//	SearchInfo(int w,int h, int s)
//		: wIdx(w), hIdx(h), size(s)
//	{ }
//};
//
//vector<int> solution(vector<vector<int>> arr)
//{
//	vector<int> answer(2,0);
//	
//	size_t n = arr.size();
//	queue<SearchInfo> q;
//	for (int j = 0; j < n; ++j)
//	{
//		for (int i = 0; i < n; ++i)
//		{
//			++answer[arr[j][i]];
//		}
//	}
//	if (answer[0] == 0)
//	{
//		answer[1] = 1;
//		return answer;
//	}
//	else if (answer[1] == 0)
//	{
//		answer[0] = 1;
//		return answer;
//	}
//	int halfSize = n / 2;
//	q.push(SearchInfo(0, 0, halfSize));
//	q.push(SearchInfo(0, halfSize, halfSize));
//	q.push(SearchInfo(halfSize, 0, halfSize));
//	q.push(SearchInfo(halfSize, halfSize, halfSize));
//
//	while (!q.empty())
//	{
//		SearchInfo CurInfo = q.front();
//		q.pop();
//
//		int wIdx = CurInfo.wIdx;
//		int hIdx = CurInfo.hIdx;
//		int size = CurInfo.size;
//
//		int curData = arr[hIdx][wIdx];
//		bool canPress = true;
//
//		int zeroCount = 0;
//		int oneCount = 0;
//		for (int j = 0; j < size; ++j)
//		{
//			for (int i = 0; i < size; ++i)
//			{
//				int curWIdx = i + wIdx;
//				int curHIdx = j + hIdx;
//
//				if (curData != arr[curHIdx][curWIdx])
//				{
//					canPress = false;
//				}
//
//				if (arr[curHIdx][curWIdx] == 0)
//					++zeroCount;
//				else
//					++oneCount;
//			}
//		}
//
//		if (canPress)
//		{
//			answer[curData] -= curData == 0 ? zeroCount : oneCount;			
//			++answer[curData];
//		}
//		else
//		{
//			if (size / 2 != 1)
//			{
//				int newSize = size / 2;
//				q.push(SearchInfo(wIdx, hIdx, newSize));
//				q.push(SearchInfo(wIdx, hIdx + newSize, newSize));
//				q.push(SearchInfo(wIdx + newSize, hIdx, newSize));
//				q.push(SearchInfo(wIdx + newSize, hIdx + newSize, newSize));
//			}
//		}
//	}
//
//	return answer;
//}
//
//int main()
//{
//	vector<vector<int>> testcase;
//	testcase.push_back({ 1,1,1,1,1,1,1,1 });
//	testcase.push_back({ 0,1,1,1,1,1,1,1 });
//	testcase.push_back({ 0,0,0,0,1,1,1,1 });
//	testcase.push_back({ 0,1,0,0,1,1,1,1 });
//	testcase.push_back({ 0,0,0,0,0,0,1,1 });
//	testcase.push_back({ 0,0,0,0,0,0,0,1 });
//	testcase.push_back({ 0,0,0,0,1,0,0,1 });
//	testcase.push_back({ 0,0,0,0,1,1,1,1 });
//
//	vector<int>  a = solution(testcase);
//
//	return 0;
//}