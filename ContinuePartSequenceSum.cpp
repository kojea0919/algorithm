//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> sequence, int k)
//{
//	int iStartIdx = 0;
//	int iEndIdx = 0;
//	int size = sequence.size();
//	int partSum = sequence[0];
//	if (partSum == k)
//	{
//		return vector<int>(2, 0);
//	}
//
//	vector<int> answer(2);
//	answer[0] = 0;
//	answer[1] = size - 1;
//	while (iStartIdx < size && iEndIdx < size)
//	{
//		if (partSum < k)
//		{
//			++iEndIdx;
//			if (iEndIdx == size)
//				return answer;
//
//			partSum += sequence[iEndIdx];
//		}
//		else if (partSum > k)
//		{
//			partSum -= sequence[iStartIdx];
//			++iStartIdx;
//			if (iStartIdx == size)
//				return answer;
//		}
//		else
//		{
//			int idxDiff = answer[1] - answer[0];
//			if (idxDiff > iEndIdx - iStartIdx)
//			{
//				answer[1] = iEndIdx;
//				answer[0] = iStartIdx;
//			}
//			++iEndIdx;
//			if (iEndIdx == size)
//				return answer;
//			partSum += sequence[iEndIdx];
//		}
//	}
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> testCase = { 2, 2, 2, 2, 2 };
//	vector<int> result = solution(testCase, 6);
//	return 0;
//}