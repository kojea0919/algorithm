//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int collumn;
//
//bool cmp(const vector<int>& v1, const vector<int>& v2)
//{
//    if (v1[collumn-1] != v2[collumn-1])
//        return v1[collumn-1] < v2[collumn-1];
//    return v1[0] > v2[0];
//}
//
//int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
//    int answer = 0;
//    collumn = col;
//
//    sort(data.begin(), data.end(),cmp);
//
//    for (int i = row_begin; i <= row_end; ++i)
//    {
//        int modSum = 0;
//        int size = data[0].size();
//        for (int idx = 0; idx < size; ++idx)
//        {
//            modSum += data[i-1][idx] % i;
//        }
//        answer ^= modSum;
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<vector<int>> data = { {1,1,1} ,{1,1,1},{1,1,1},{1,1,1} };
//    solution(data, 2, 1, 3);
//    return 0;
//}