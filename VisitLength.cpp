//#include <string>
//#include <set>
//
//
//using namespace std;
//
//int solution(string dirs) {
//    set<pair<pair<int, int>,char>> visitSet;
//
//    int curX = 0, curY = 0;
//    size_t dirsSize = dirs.size();
//    int answer = dirsSize;
//    for (size_t idx = 0; idx < dirsSize; ++idx)
//    {
//        char curDir = dirs[idx];
//        char reverseDir;
//
//        int diffX = 0, diffY = 0;
//        switch (curDir)
//        {
//        case 'D':
//            --diffY;
//            reverseDir = 'U';
//            break;
//        case 'L':
//            --diffX;
//            reverseDir = 'R';
//            break;
//        case 'R':
//            ++diffX;
//            reverseDir = 'L';
//            break;
//        case 'U':
//            ++diffY;
//            reverseDir = 'D';
//            break;
//        }
//
//        int newX = curX + diffX;
//        int newY = curY + diffY;
//        if (newX < -5 || newX > 5 || newY < -5 || newY > 5)
//        {
//            --answer;
//            continue;
//        }
//
//
//        pair<pair<int, int>, char> newVisitPair = make_pair(make_pair(newX, newY), curDir);
//        pair<pair<int, int>, char> reverseVisitPair = make_pair(make_pair(curX, curY), reverseDir);
//        if (visitSet.end() != visitSet.find(newVisitPair))
//            --answer;
//        else if (visitSet.end() != visitSet.find(reverseVisitPair))
//        {
//            --answer;
//            visitSet.insert(reverseVisitPair);
//        }
//        else
//            visitSet.insert(newVisitPair);
//
//        curX = newX;
//        curY = newY;
//    }
//
//    return answer;
//}
//
//int main()
//{
//    string testcase = "ULDDURLDURLDURULDDRUL";
//
//    solution(testcase);
//
//    return 0;
//}