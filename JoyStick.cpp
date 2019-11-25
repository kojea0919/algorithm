#include <string>
using namespace std;

#define max(x,y)  x > y  ? x : y
#define min(x,y)  x < y  ? x : y

string g_Name;
int g_iWithOutACnt = 0;

int ComputeCnt(int iIdx, int iValue = 0)
{
	if (g_Name[iIdx] != 'A')
	{

		if (g_Name[iIdx] < 'O')
		{
			iValue += g_Name[iIdx] - 'A';
		}
		else
		{
			iValue += 'Z' - g_Name[iIdx] + 1;
		}
		--g_iWithOutACnt;
		//탈출 조건
		if (g_iWithOutACnt == 0)
		{
			return iValue;
		}

		g_Name[iIdx] = 'A';
	}
	int iLen = max(iIdx, g_Name.size() - iIdx - 1);

	//다음 바꿔야할 위치 찾기
	for (int iCnt = 1; iCnt <= iLen; ++iCnt)
	{
		int iRightNextIdx = iIdx + iCnt;
		int iLeftNextIdx = iIdx - iCnt;
		if (iIdx - iCnt < 0)
		{
			iLeftNextIdx = g_Name.size() +(iIdx - iCnt);
		}
		if (iIdx + iCnt > g_Name.size() - 1)
		{
			iRightNextIdx = iIdx + iCnt - g_Name.size() ;
		}

		if (g_Name[iLeftNextIdx] != 'A')
		{
			return ComputeCnt(iLeftNextIdx, iValue + iCnt);
		}
		else if (g_Name[iRightNextIdx] != 'A')
		{
			return ComputeCnt(iRightNextIdx, iValue + iCnt);
		}
	}

}

int ComputeCnt2(int iIdx, int iValue = 0)
{
	if (g_Name[iIdx] != 'A')
	{

		if (g_Name[iIdx] < 'O')
		{
			iValue += g_Name[iIdx] - 'A';
		}
		else
		{
			iValue += 'Z' - g_Name[iIdx] + 1;
		}
		--g_iWithOutACnt;
		//탈출 조건
		if (g_iWithOutACnt == 0)
		{
			return iValue;
		}

		g_Name[iIdx] = 'A';
	}
	int iLen = max(iIdx, g_Name.size() - iIdx - 1);

	//다음 바꿔야할 위치 찾기
	for (int iCnt = 1; iCnt <= iLen; ++iCnt)
	{
		int iRightNextIdx = iIdx + iCnt;
		int iLeftNextIdx = iIdx - iCnt;
		if (iIdx - iCnt < 0)
		{
			iLeftNextIdx = g_Name.size() + (iIdx - iCnt);
		}
		if (iIdx + iCnt > g_Name.size() - 1)
		{
			iRightNextIdx = iIdx + iCnt - g_Name.size();
		}

		if (g_Name[iRightNextIdx] != 'A')
		{
			return ComputeCnt(iRightNextIdx, iValue + iCnt);
		}
		else if (g_Name[iLeftNextIdx] != 'A')
		{
			return ComputeCnt(iLeftNextIdx, iValue + iCnt);
		}
	}

}

int main()
{
	string name = "JAN";


	int answer = 0;

	g_Name = name;
	int iLen = name.size();


	for (int iCnt = 0; iCnt < iLen; ++iCnt)
	{
		if (name[iCnt] != 'A')
			++g_iWithOutACnt;
	}

	int Temp = g_iWithOutACnt;
	int Rightcnt =  ComputeCnt(0, 0);
	g_Name = name;
	g_iWithOutACnt = Temp;
	int Leftcnt = ComputeCnt2(0, 0);

	answer = min(Rightcnt, Leftcnt);
	return 0;
}