//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(int k, vector<vector<int>> dungeons) {
//    size_t size = dungeons.size();
//    vector<int> idxVec;
//    for (int i = 0; i < size; ++i)
//    {
//        idxVec.push_back(i);
//    }
//
//    int max = 0;
//    do
//    {
//        int count = 0;
//        int copyK = k;
//        for (size_t j = 0; j < size; ++j)
//        {
//            int curIdx = idxVec[j];
//
//            if (copyK - dungeons[curIdx][1] >= 0 && copyK >= dungeons[curIdx][0])
//            {
//                copyK -= dungeons[curIdx][1];
//                ++count;
//            }
//            else break;
//        }
//
//        max = max < count ? count : max;
//    } while (next_permutation(idxVec.begin(), idxVec.end()));
//
//    return max;
//}
//
//int main()
//{
//    vector<vector<int>> testcase = { {20,20},{30,30},{30,30} };
//
//    solution(80, testcase);
//
//    return 0;
//}