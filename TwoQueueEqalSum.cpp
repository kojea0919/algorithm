//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> queue1, vector<int> queue2)
//{
//	size_t size = queue1.size();
//	long queue1Sum = 0;
//	long queue2Sum = 0;
//	for (size_t i = 0; i < size; ++i)
//	{
//		queue1Sum += queue1[i];
//		queue2Sum += queue2[i];
//		queue1.push_back(queue2[i]);
//	}
//	long equalNum = (queue1Sum + queue2Sum) / 2;
//
//	int start = 0;
//	int end = size - 1;
//	size *= 2;
//	long partSum = queue1Sum;
//	int count = 0;
//	while (start != size)
//	{
//		if (partSum == equalNum)
//			return count;
//
//		else if (partSum > equalNum)
//		{
//			partSum -= queue1[start];
//			++start;
//		}
//		else if (partSum < equalNum)
//		{
//			++end;
//			if (end == size)
//				break;
//			partSum += queue1[end];
//		}
//		++count;
//	}
//	return -1;
//}
//
//int main()
//{
//	vector<int> queue1 = { 1, 2, 1, 2 };
//	vector<int> queue2 = { 1, 10, 1, 2 };
//
//	int test = solution(queue1, queue2);
//
//	return 0;
//}