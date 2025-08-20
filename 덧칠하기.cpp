//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n, int m, vector<int> section) {
//    int answer = 0;
//
//    int startWall = section[0];
//    int endWall = startWall + m - 1;
//
//    size_t size = section.size();
//    for (size_t i = 1; i < size; ++i)
//    {
//        if (endWall < section[i])
//        {
//            ++answer;
//            startWall = section[i];
//            endWall = startWall + m - 1;
//        }
//    }
//
//    return ++answer;
//}
//
//int main()
//{
//    int result = solution(8, 4, { 2,3,5,6,7,8 });
//    result = solution(5, 4, { 1,3 });
//    result = solution(4, 1, { 1,2,4 });
//    return 0;
//}