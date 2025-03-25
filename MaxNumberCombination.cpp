#include <string>
#include <vector>

using namespace std;



int main()
{
	string number = "10000";


	int k = 2;

	string answer;

	answer = number.substr(2);

	vector<char> Combination;

	for (int iCnt = 0; iCnt < number.size(); ++iCnt)
	{
		if (iCnt == 0)
			Combination.push_back(number[iCnt]);
		
		else
		{
			char cBack = Combination.back();

			while (cBack < number[iCnt] && k >0)
			{
				--k;
				Combination.pop_back();
				if (Combination.empty())
					break;
				cBack = Combination.back();
			}

			Combination.push_back(number[iCnt]);
		}
	}
	

	for (int i = 0; i < Combination.size()-k; ++i)
	{
		answer.push_back(Combination[i]);
	}

	return 0;
}