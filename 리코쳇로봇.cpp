//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int dRow[] = { 0, 0, 1, -1 };
//int dCol[] = { 1, -1, 0, 0 };
//int boardWidth, boardHeight;
//
//int solution(vector<string> board) {
//    int answer = 0;
//
//    boardHeight = board.size();
//    boardWidth = board[0].size();
//    pair<int, int> start;
//    for (size_t rowIdx = 0; rowIdx < boardHeight; ++rowIdx)
//    {
//        size_t colIdx = board[rowIdx].find('R');
//        if (colIdx != string::npos)
//        {
//            start.first = rowIdx;
//            start.second = colIdx;
//            break;
//        }
//    }
//
//    vector<vector<bool>> visit(boardHeight, vector<bool>(boardWidth,false));
//    queue<pair<int, int>> q;
//    q.push(start);
//    visit[start.first][start.second] = true;
//    int depth = 0;
//    while (!q.empty())
//    {
//        queue<pair<int, int>> temp;
//        while (!q.empty())
//        {
//            pair<int,int> p = q.front();
//            q.pop();
//            int rowIdx = p.first;
//            int colIdx = p.second;
//
//            if (board[rowIdx][colIdx] == 'G')
//                return depth;
//     
//            for (int i = 0; i < 4; ++i)
//            {
//                int newRowIdx = rowIdx;
//                int newColIdx = colIdx;
//                while(true)
//                {
//                     newRowIdx += dRow[i];
//                     newColIdx += dCol[i];
//                    
//                     if (newRowIdx < 0 || newColIdx < 0 ||
//                         newRowIdx >= boardHeight || newColIdx >= boardWidth ||
//                         board[newRowIdx][newColIdx] == 'D')
//                     {
//                         newRowIdx -= dRow[i];
//                         newColIdx -= dCol[i];
//                         break;
//                     }
//                }
//
//                if (!visit[newRowIdx][newColIdx])
//                {
//                    visit[newRowIdx][newColIdx] = true;
//                    temp.push(make_pair(newRowIdx, newColIdx));
//                }
//            }
//        }
//        q = move(temp);
//
//        ++depth;
//    }
//    return -1;
//}
//
//int main()
//{
//    vector<string> board = { ".D.R", "....", ".G..", "...D" };
//    int a = solution(board);
//
//    return 0;
//}