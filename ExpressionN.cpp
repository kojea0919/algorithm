//#include <string>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//int solution(int N, int number)
//{
//	int answer = 0;
//
//	if (N == number)
//		return 1;
//
//	unordered_set<int> set[8];
//	set[0].insert(N);
//
//	if (N + N * 10 == number || N + N == number ||
//		N / N == number || N * N == number)
//		return 2;
//
//	set[1].insert(N + N * 10);
//	set[1].insert(N + N);
//	set[1].insert(N / N);
//	set[1].insert(N * N);
//
//	for (int i = 2; i < 8; ++i)
//	{
//		int Sum = 0;
//		for (int j = 0; j <= i; ++j)
//		{
//			Sum += N * pow(10, j);
//		}
//		if (Sum == number)
//			return i + 1;
//
//		set[i].insert(Sum);
//		int curMakeCount = i + 1;
//
//		for (int j = 1; j <= curMakeCount / 2; ++j)
//		{
//			int k = curMakeCount - j;
//
//			for (int jElement : set[j-1])
//			{
//				for (int kElement : set[k-1])
//				{
//					if (jElement == 0 || kElement == 0)
//						continue;
//
//					int newNum = kElement + jElement;
//					if (newNum == number)
//						return curMakeCount;
//					set[i].insert(newNum);
//
//					newNum = kElement - jElement;
//					if (newNum == number || -newNum == number)
//						return curMakeCount;
//					if (newNum != 0)
//						set[i].insert(abs(newNum));
//
//					newNum = kElement * jElement;
//					if (newNum == number)
//						return curMakeCount;
//					set[i].insert(newNum);
//
//					newNum = kElement / jElement;
//					if (newNum == number)
//						return curMakeCount;
//					if(newNum != 0)
//						set[i].insert(newNum);
//
//					newNum = jElement / kElement;
//					if (newNum == number)
//						return curMakeCount;
//					if (newNum != 0)
//						set[i].insert(newNum);
//				}
//			}
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int result = solution(2, 11);
//	return 0;
//}