//#include <algorithm>
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//map<string, int> combi;
//
//void combination(string src, string crs, int depth)
//{
//	if (crs.size() == depth) combi[crs]++;
//
//	else
//	{
//		for (int i = 0; i < src.size(); ++i)
//		{
//			combination(src.substr(i + 1), crs + src[i], depth);
//		}
//	}
//}
//
//
//int main()
//{
//	combination("ABC", "", 2);
//
//	return 0;
//}