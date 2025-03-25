
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;

	//---------------------------------------------------------
	int iCompleteNum = 0;
	sort(people.begin(), people.end(), less<int>());

	//누적 무게
	int iLastPeopleIdx = people.size() - 1;
	int iFirstPeopleIdx = 0;

	while (iCompleteNum != people.size())
	{
		if (iFirstPeopleIdx == iLastPeopleIdx)
		{
			++answer;
			break;
		}

		int iFirstWeight = people[iFirstPeopleIdx];
		int iLastWeight = people[iLastPeopleIdx];

		//둘이 합쳐서 무게가 넘어가면 무거운 쪽은 혼자 탄다
		if (iFirstWeight + iLastWeight > limit)
		{
			++iCompleteNum;
			--iLastPeopleIdx;
		}
		//무게 안쪽이면 같이 탄다.
		else
		{
			++iFirstPeopleIdx;
			--iLastPeopleIdx;
			iCompleteNum += 2;
		}
		++answer;
	}

	return answer;
}
