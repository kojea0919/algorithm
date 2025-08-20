//#include <iostream>
//#include <vector>	
//
//using namespace std;
//
//void Permutation(vector<int> vec,int depth,int firstIdx)
//{
//	vector<int> copy;
//	size_t size = vec.size();
//	for (size_t idx = firstIdx; idx < size ; ++idx)
//	{
//		copy = vec;
//		swap(copy[firstIdx], copy[idx]);
//		Permutation(copy, depth - 1, firstIdx + 1);
//	}
//
//
//	if (depth == 0)
//	{
//		for (int idx = 0; idx < vec.size(); ++idx)
//			cout << vec[idx] << " ";
//		cout << endl;
//	}
//
//}
//
//int main()
//{
//	vector<int> testcase = { 1,2,3,4 };
//
//	Permutation(testcase,3,0);
//
//	return 0;
//}