//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct ElementNode
//{
//    int Num;
//    size_t Count;
//
//    bool operator<(const ElementNode& other)
//    {
//        return Count > other.Count;
//    }
//    bool operator>(const ElementNode& other)
//    {
//        return Count < other.Count;
//    }
//};
//
//vector<int> solution(string s) {
//    vector<int> answer;
//    vector<ElementNode> CountingVec;
//
//    for (size_t i = 0; i < 100000; ++i)
//    {
//        ElementNode NewNode;
//        NewNode.Num = i;
//        NewNode.Count = 0;
//        CountingVec.push_back(NewNode);
//    }
//
//    size_t Len = s.size();
//
//    char PrevChar = '{';
//    char NextChar = s[1];
//    string CurNum;
//    for (size_t Idx = 0; Idx < Len; ++Idx)
//    {
//        char CurChar = s[Idx];
//        
//        if (CurChar >= '0' && CurChar <= '9')
//        {
//            CurNum += CurChar;
//        }
//        else
//        {
//            //숫자가 완성된 경우
//            if (!CurNum.empty())
//            {
//                int CurValue = stoi(CurNum);
//
//                ++CountingVec[CurValue].Count;
//
//                CurNum.clear();
//                
//            }
//            //숫자가 아닌 경우
//        }
//    }
//
//    sort(CountingVec.begin(), CountingVec.end());
//    size_t Idx = 0;
//    size_t CurCount = CountingVec[0].Count;
//    while (CurCount != 0)
//    {
//        answer.push_back(CountingVec[Idx].Num);
//        ++Idx;
//        CurCount = CountingVec[Idx].Count;
//    }
//
//    return answer;
//}
//
//int main()
//{
//    string testcase = "{{4,2,3},{3},{2,3,4,1},{2,3}}";
//
//    solution(testcase);
//
//    vector<int> test = { 2,1,4,3 };
//
//    return 0;
//}
