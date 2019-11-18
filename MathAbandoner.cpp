#include <string>
#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;

struct st_Info
{
	int iRight = 0;
	int iNum;
};

bool cmp(const st_Info & info1, const st_Info & info2)
{
	if (info1.iRight < info2.iRight)
	{
		return false;
	}
	else if(info1.iRight > info2.iRight)
	{
		return true;
	}
	else
	{
		if (info1.iNum < info2.iNum)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	vector<int> answers;

	answers.push_back(1);
	answers.push_back(2);
	answers.push_back(3);
	answers.push_back(4);
	answers.push_back(5);

	vector<int> answer;

	st_Info Info[3];

	//각각의 수포자들 패턴 배열
	int iAbandoner1[5] = { 1,2,3,4,5 };
	int iAbandoner2[8] = { 2,1,2,3,2,4,2,5 };
	int iAbandoner3[10] = { 3,3,1,1,2,2,4,4,5,5 };

	//각각의 수포자들 패턴 배열에 대한 인덱스
	int iIdx1 = 0, iIdx2 = 0, iIdx3 = 0;

	//각 수포자들 정보
	Info[0].iNum = 1;
	Info[1].iNum = 2;
	Info[2].iNum = 3;

	vector<int>::iterator CurIter = answers.begin();
	vector<int>::iterator EndIter = answers.end();

	for (; CurIter != EndIter; ++CurIter)
	{
		int iSolution = *CurIter;
		if (iAbandoner1[iIdx1] == iSolution)
		{
			++Info[0].iRight;
		}
		if (iAbandoner2[iIdx2] == iSolution)
		{
			++Info[1].iRight;
		}
		if (iAbandoner3[iIdx3] == iSolution)
		{
			++Info[2].iRight;
		}

		iIdx1 = (iIdx1 + 1) % 5;                     
		iIdx2 = (iIdx2 + 1) % 8;
		iIdx3 = (iIdx3 + 1) % 10;
	}
	
	//정렬
	sort(Info, Info + 3, cmp);


	//모두 같이 1등한 경우
	if (Info[0].iRight == Info[1].iRight && Info[1].iRight == Info[2].iRight)
	{
		answer.push_back(Info[0].iNum);
		answer.push_back(Info[1].iNum);
		answer.push_back(Info[2].iNum);
	}
	else if (Info[0].iRight == Info[1].iRight)
	{
		answer.push_back(Info[0].iNum);
		answer.push_back(Info[1].iNum);
	}
	else
	{
		answer.push_back(Info[0].iNum);
	}
	//위에 부분은 차라리 max 뽑아서
	//for문 돌면서 push하는게 좋을듯


	return 0;
}