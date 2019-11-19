#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;

	int iVecNum = skill_trees.size();

	for (int iVecCnt = 0; iVecCnt < iVecNum; ++iVecCnt)
	{
		string TempSkill = skill;
		int skill_Idx = 0;
		bool bIsRight = true;

		string CurTree = skill_trees[iVecCnt];
		int CurTreeNum = CurTree.size();

		for (int iCnt = 0; iCnt < CurTreeNum; ++iCnt)
		{
			//��ųƮ���� ���� ��ų�̸� ���� �� ����
			if (TempSkill.find(CurTree[iCnt]) == -1)
			{
				continue;
			}

			//��ųƮ���� �ִ� ��ų�̰� ���� ��� ���� �� ��
			else if (TempSkill[skill_Idx] == CurTree[iCnt])
			{
				++skill_Idx;
				continue;
			}

			else
			{
				bIsRight = false;
				break;
			}
		}

		//���� ��ųƮ���� �� �������
		if (bIsRight)
		{
			++answer;
		}
	}

	return answer;
}


