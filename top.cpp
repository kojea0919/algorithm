#include <string>
#include <vector>
#include <queue>

using namespace std;

struct cmp {
	bool operator()(pair<int, int> p1, pair<int, int> p2)
	{
		return p1.first < p2.first;
	}
};


vector<int> solution(vector<int> heights) {
	vector<int> answer;

	priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> PQ_Height;


	int iLen = heights.size();
	int iMax = 0;

	for (int iCnt = 0; iCnt < iLen; ++iCnt)
	{
		PQ_Height.push(make_pair(heights[iCnt], iCnt));
		answer.push_back(0);
		if (iMax < heights[iCnt])
			iMax = heights[iCnt];
	}

	int Currentheight = iMax;
	vector<pair<int, int>> HigherHeight;

	while (!PQ_Height.empty())
	{
		pair<int, int> CurrentPair = PQ_Height.top();

		if (Currentheight == CurrentPair.first)
		{
			//HigherHeight에서 자기보다 왼쪽에 있는게 있는지 찾기
			iLen = HigherHeight.size();
			iMax = 0;
			for (int iCnt = 0; iCnt < iLen; ++iCnt)
			{
				//자기보다 큰 애들만 비교
				if (HigherHeight[iCnt].first == CurrentPair.first)
					break;

				if (HigherHeight[iCnt].second < CurrentPair.second && iMax < HigherHeight[iCnt].second + 1)
				{
					iMax = HigherHeight[iCnt].second + 1;
				}
			}
			if (iMax != 0)
				answer[CurrentPair.second] = iMax;
			PQ_Height.pop();
			HigherHeight.push_back(CurrentPair);
		}

		//다음 높이로 내려가기
		else if (Currentheight > CurrentPair.first)
		{
			--Currentheight;
		}
	}

	return answer;
}


