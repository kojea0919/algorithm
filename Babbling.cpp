//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<string> babbling)
//{
//	int answer = 0;
//
//	size_t size = babbling.size();
//
//	for (size_t idx = 0; idx < size; ++idx)
//	{
//		bool canSpeak = true;
//
//		size_t len = babbling[idx].size();
//		char prevChar = 'z';
//		for (size_t i = 0; i < len;)
//		{
//			char curChar = babbling[idx][i];
//			
//			if (curChar == prevChar)
//			{
//				canSpeak = false;
//				break;
//			}
//			else if (curChar == 'a' && "aya" == babbling[idx].substr(i, 3))
//				i += 3;
//			else if (curChar == 'y' && "ye" == babbling[idx].substr(i, 2))
//				i += 2;
//			else if (curChar == 'w' && "woo" == babbling[idx].substr(i, 3))
//				i += 3;
//			else if (curChar == 'm' && "ma" == babbling[idx].substr(i, 2))
//				i += 2;
//			else
//			{
//				canSpeak = false;
//				break;
//			}
//			prevChar = curChar;
//
//		}
//		if (canSpeak)
//			++answer;
//	}
//	return answer;
//}
//
//int main()
//{
//	vector<string> Babbling;
//	Babbling.push_back("ayaye");
//	Babbling.push_back("uuu");
//	Babbling.push_back("yeye");
//	Babbling.push_back("yemawoo");
//	Babbling.push_back("ayaayaa");
//
//	int result = solution(Babbling);
//
//	return 0;
//}