//#include <string>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//int solution(vector<int> topping) {
//    int answer = 0;
//
//    size_t size = topping.size();
//    set<int> toppingTypeSet1;
//    vector<int> toppingNumVec(10000,0);
//    for (size_t idx = 0; idx < size; ++idx)
//    {
//        int curTopping = topping[idx];
//        toppingTypeSet1.insert(curTopping);
//        ++toppingNumVec[curTopping];
//    }
//    
//    set<int> toppingTypeSet2;
//    for (size_t idx = 0; idx < size; ++idx)
//    {
//        int curTopping = topping[idx];
//
//        --toppingNumVec[curTopping];
//        if (toppingNumVec[curTopping] == 0)
//            toppingTypeSet1.erase(curTopping);
//
//        toppingTypeSet2.insert(curTopping);
//
//        size_t set1Size = toppingTypeSet1.size();
//        size_t set2Size = toppingTypeSet2.size();
//        if (set1Size == set2Size)
//            ++answer;
//
//        if (set2Size > set1Size)
//            break;
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> testcase = { 1, 2, 3, 1, 4 };
//
//    solution(testcase);
//
//    return 0;
//}