//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(int storey)
//{
//	int min = storey;
//	queue<pair<int, int>> q;
//	q.push(make_pair(storey, 0));
//
//	while (!q.empty())
//	{
//		pair<int, int> pair = q.front();
//		q.pop();
//		int curStorey = pair.first;
//		int curCount = pair.second;
//		if (curCount > min)
//			continue;
//
//		int place = 0;
//		int remain = 0;
//		for (int i = 1; i < 9; ++i)
//		{
//			int p = pow(10, i);
//			remain = curStorey % p;
//			if (remain != 0)
//			{
//				place = i;
//				break;
//			}
//		}
//
//		int upDiff = pow(10, place) - remain;
//		int downDiff = remain;
//		int upStorey = curStorey + upDiff;
//		int downStorey = curStorey - downDiff;
//
//		int upCount = upDiff / pow(10, place - 1) + curCount;
//		int downCount = downDiff / pow(10, place - 1) + curCount;
//		if(upStorey != 0)
//			q.push(make_pair(upStorey, upCount));
//		else
//			min = upCount > min ? min : upCount;
//
//		if(downStorey != 0)
//			q.push(make_pair(downStorey, downCount));
//		else
//			min = downCount > min ? min : downCount;
//	}
//
//	return min;
//}
//
//int main()
//{
//	int result = solution(16);
//
//	return 0;
//}