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
			//스킬트리에 없는 스킬이면 다음 것 보기
			if (TempSkill.find(CurTree[iCnt]) == -1)
			{
				continue;
			}

			//스킬트리에 있는 스킬이고 같을 경우 다음 것 비교
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

		//선행 스킬트리를 잘 배웠으면
		if (bIsRight)
		{
			++answer;
		}
	}

	return answer;
}


