//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//
//vector<int> solution(vector<string> maps) {
//    vector<int> answer;
//
//    size_t heightSize = maps.size();
//    size_t widthSize = maps[0].size();
//    vector<vector<bool>> visit(heightSize,vector<bool>(widthSize,false));
//
//    for (int height = 0; height < heightSize; ++height)
//    {
//        for (int width = 0; width < widthSize; ++width)
//        {
//            char curTile = maps[height][width];
//            if (visit[height][width] || curTile == 'X')
//                continue;
//            
//            queue<pair<int, int>> q;
//            q.push(make_pair(height,width));
//            visit[height][width] = true;
//            int day = curTile - '0';
//
//            while (!q.empty())
//            {
//                auto p = q.front();
//                q.pop();
//                int curHeight = p.first;
//                int curWidth = p.second;
//
//                for (int i = 0; i < 4; ++i)
//                {
//                    int newHeight = curHeight + dy[i];
//                    int newWidth = curWidth + dx[i];
//
//                    if (newHeight >= 0 && newHeight < heightSize &&
//                        newWidth >= 0 && newWidth < widthSize &&
//                        !visit[newHeight][newWidth] && maps[newHeight][newWidth] != 'X')
//                    {
//                        visit[newHeight][newWidth] = true;
//                        q.push(make_pair(newHeight, newWidth));
//                        day += maps[newHeight][newWidth] - '0';
//                    }
//                }
//            }
//
//            answer.push_back(day);
//        }
//    }
//
//    if (answer.size() == 0)
//        answer.push_back(-1);
//    else
//        sort(answer.begin(), answer.end());
//
//    return answer;
//}
//
//int main()
//{
//    vector<string> maps = { "XXX","XXX","XXX" };
//    solution(maps);
//    return 0;
//}