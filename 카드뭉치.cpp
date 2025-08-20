//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
//    string answer = "";
//
//    int card1Size = cards1.size();
//    int card2Size = cards2.size();
//    int card1Idx = 0;
//    int card2Idx = 0;
//    int goalSize = goal.size();
//    for (int i = 0; i < goalSize; ++i)
//    {
//        string curStr = goal[i];
//        if (card1Idx < card1Size && curStr == cards1[card1Idx])
//            ++card1Idx;
//        else if (card2Idx < card2Size && curStr == cards2[card2Idx])
//            ++card2Idx;
//        else
//            return "No";
//    }
//    return "Yes";
//}
//
//int main()
//{
//
//    return 0;
//}