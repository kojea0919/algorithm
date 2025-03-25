
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;

	//---------------------------------------------------------
	int iCompleteNum = 0;
	sort(people.begin(), people.end(), less<int>());

	//���� ����
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

		//���� ���ļ� ���԰� �Ѿ�� ���ſ� ���� ȥ�� ź��
		if (iFirstWeight + iLastWeight > limit)
		{
			++iCompleteNum;
			--iLastPeopleIdx;
		}
		//���� �����̸� ���� ź��.
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
