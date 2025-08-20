//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int BFS(const vector<string>& maps, char target, int sRowIdx, int sColIdx)
//{
//    int rowSize = maps.size();
//    int colSize = maps[0].size();
//    vector<vector<int>> dist(rowSize, vector<int>(colSize, 0));
//    vector<vector<bool>> visit(rowSize, vector<bool>(colSize, false));
// 
//    queue<pair<int, int>> q;
//    q.push(make_pair(sRowIdx, sColIdx));
//    visit[sRowIdx][sColIdx] = true;
//
//    int dx[] = { 0,0,1,-1 };
//    int dy[] = { 1,-1,0,0 };
//
//
//    while (!q.empty())
//    {
//        pair<int,int> curPos = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; ++i)
//        {
//            int newRowIdx = curPos.first + dx[i];
//            int newColIdx = curPos.second + dy[i];
//
//            if (newRowIdx < 0 || newRowIdx >= rowSize ||
//                newColIdx < 0 || newColIdx >= colSize)
//                continue;
//
//            if (visit[newRowIdx][newColIdx])
//                continue;
//
//            char type = maps[newRowIdx][newColIdx];
//            if (type == target)
//            {
//                return 1 + dist[curPos.first][curPos.second];
//            }
//            else if (type != 'X')
//            {
//                q.push(make_pair(newRowIdx, newColIdx));
//                visit[newRowIdx][newColIdx] = true;
//                dist[newRowIdx][newColIdx] = 1 + dist[curPos.first][curPos.second];
//            }
//        }
//    }
//    return -1;
//}
//
//int solution(vector<string> maps) {
//    int answer = 0;
//
//    int rowNum = maps.size();
//    int colNum = maps[0].size();
//
//    int sRowIdx, sColIdx;
//    int lRowIdx, lColIdx;
//    for (int rowIdx = 0; rowIdx < rowNum; ++rowIdx)
//    {
//        int idx = maps[rowIdx].find('S');
//        if (idx != string::npos)
//        {
//            sRowIdx = rowIdx;
//            sColIdx = idx;
//        }
//        idx = maps[rowIdx].find('L');
//        if (idx != string::npos)
//        {
//            lRowIdx = rowIdx;
//            lColIdx = idx;
//        }
//    }
//
//    int sToLDist = BFS(maps, 'L', sRowIdx, sColIdx);
//    if (sToLDist == -1)
//        return -1;
//
//    int lToEDist = BFS(maps, 'E', lRowIdx, lColIdx);
//    if (lToEDist == -1)
//        return -1;
//
//    return sToLDist + lToEDist;
//}
//
//int main()
//{
//    vector<string> maps = { "LOOXS","OOOOX","OOOOO","OOOOO","EOOOO" };
//
//    int a = solution(maps);
//    return 0;
//}