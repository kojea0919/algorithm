//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//string solution(vector<int> food) {
//    string answer = "";
//    
//    int size = food.size();
//    for (int i = 1; i < size; ++i)
//    {
//        int foodSize = food[i] / 2;
//        for (int j = 0; j < foodSize; ++j)
//        {
//            answer += i + '0';
//        }
//    }
//    string temp = answer;
//    reverse(answer.begin(), answer.end());
//    temp += '0' + answer;
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> a = { 1,3,4,6 };
//    solution(a);
//  
//    return 0;
//}