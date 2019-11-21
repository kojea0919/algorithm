
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60

#include <string>
#include <vector>
#include <list>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;

	list<pair<int, int>> BridgeState;

	BridgeState.push_back(make_pair(truck_weights[0], 1));
	++answer;

	int iCurrentWeight = truck_weights[0];
	int iNextTruckIdx = 1;
	int iProcNum = 0;

	while (!BridgeState.empty() || iProcNum < truck_weights.size())
	{
		++answer;

		if (iNextTruckIdx < truck_weights.size())
		{
			int iNextTruckWeight = truck_weights[iNextTruckIdx];
			//무게 초과가 아닌 경우에만 추가 가능
			if (iNextTruckWeight + iCurrentWeight <= weight)
			{
				BridgeState.push_back(make_pair(truck_weights[iNextTruckIdx], 0));
				iCurrentWeight += iNextTruckWeight;
				++iNextTruckIdx;
			}
		}

		list<pair<int, int>>::iterator CurIter = BridgeState.begin();
		list<pair<int, int>>::iterator EndIter = BridgeState.end();

		for (; CurIter != EndIter;)
		{
			++(*CurIter).second;

			if ((*CurIter).second == bridge_length)
			{
				iCurrentWeight -= (*CurIter).first;
				CurIter = BridgeState.erase(CurIter);
				++iProcNum;
				continue;
			}
			++CurIter;
		}



	}

	++answer;

	return answer;
}

