//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n)
//{
//	int answer = 0;
//
//	for (int i = 2; i <= n; ++i)
//	{
//		int sqrti = sqrt(i);
//		bool isPrime = true;
//		for (int j = 2; j <= sqrti; ++j)
//		{
//			if (i % j == 0)
//			{
//				isPrime = false;
//				break;
//			}
//		}
//		if (isPrime)
//			++answer;
//	}
//	return answer;
//}
//
//int main()
//{
//	int result = solution(10);
//
//	return 0;
//}