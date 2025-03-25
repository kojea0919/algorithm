#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = 0;

	int iMin = s.size();
	int iLen = s.size();
	int iStringHalf = iLen / 2;

	string Compress;

	//iDivide = 몇개로 분할 할지
	for (int iDivide = 1; iDivide <= iStringHalf; ++iDivide)
	{
		int iDivideCnt = iLen / iDivide;
		//iDivideCnt = 분할된 개수

		string prevstr = s.substr(0, iDivide);
		int prevCnt = 1;

		for (int i = 1; i < iDivideCnt; ++i)
		{
			string CurStr = s.substr(i*iDivide, iDivide);

			//이전 것과 다르면 이전 것 그냥 넣기
			if (prevstr.compare(CurStr) != 0)
			{
				if (prevCnt == 1)
				{
					Compress.append(prevstr);
				}
				else
				{
					Compress.append(to_string(prevCnt));
					Compress.append(prevstr);

				}
				prevstr = CurStr;
				prevCnt = 1;

				//마지막이면 넣기
				if (i == iDivideCnt - 1)
				{
					Compress.append(s.substr(i*iDivide, s.size() - i * iDivide));
				}

				continue;
			}

			//이전 것과 같으면 cnt증가
			else
			{
				++prevCnt;

				//마지막이면 넣기
				if (i == iDivideCnt - 1)
				{
					Compress.append(to_string(prevCnt));
					Compress.append(prevstr);
					Compress.append(s.substr(i*iDivide + 1, s.size() - (i + 1)*iDivide));
				}
			}
		}

		if (iMin > Compress.size())
			iMin = Compress.size();
		Compress.clear();
	}

	answer = iMin;

	return answer;
}