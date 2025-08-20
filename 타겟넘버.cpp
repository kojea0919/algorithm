//#include <string>
//#include <vector>
//
//using namespace std;
//
//int DFS(const vector<int>& numbers,int target, int curIdx,int curValue, int & count)
//{
//    if (numbers.size() == curIdx)
//    {
//        if (curValue == target)
//            ++count;
//        return count;
//    }
//
//    DFS(numbers, target, curIdx + 1, curValue + numbers[curIdx], count);
//    DFS(numbers, target, curIdx + 1, curValue - numbers[curIdx], count);
//
//    return count;
//}
//
//int solution(vector<int> numbers, int target) {
//    int answer = 0;
//
//    return DFS(numbers, target, 0, 0, answer);
//}
//
//int main()
//{
//    int result = solution({ 4,1,2,1 }, 4);
//
//    return 0;
//}