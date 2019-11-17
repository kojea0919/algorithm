#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = 0;

	int iMin = s.size();
	int iLen = s.size();
	int iStringHalf = iLen / 2;

	string Compress;

	//iDivide = ��� ���� ����
	for (int iDivide = 1; iDivide <= iStringHalf; ++iDivide)
	{
		int iDivideCnt = iLen / iDivide;
		//iDivideCnt = ���ҵ� ����

		string prevstr = s.substr(0, iDivide);
		int prevCnt = 1;

		for (int i = 1; i < iDivideCnt; ++i)
		{
			string CurStr = s.substr(i*iDivide, iDivide);

			//���� �Ͱ� �ٸ��� ���� �� �׳� �ֱ�
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

				//�������̸� �ֱ�
				if (i == iDivideCnt - 1)
				{
					Compress.append(s.substr(i*iDivide, s.size() - i * iDivide));
				}

				continue;
			}

			//���� �Ͱ� ������ cnt����
			else
			{
				++prevCnt;

				//�������̸� �ֱ�
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