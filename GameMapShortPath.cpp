#include <vector>
#include <list>

using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = -1;
    
    int targetRowIdx = maps.size() - 1;
    int targetColIdx = maps[0].size() - 1;

    vector<vector<int>> dist(targetRowIdx + 1,vector<int>(targetColIdx + 1,100000000));
    vector<vector<bool>> visited(targetRowIdx + 1, vector<bool>(targetColIdx + 1, false));
    dist[0][0] = 0;

    list<pair<int, int>> nextSearchList;
    nextSearchList.push_back(make_pair(0, 0));
    visited[0][0] = true;

    while(!nextSearchList.empty())
    {
        pair<int, int> curSearchNode = nextSearchList.front();
        nextSearchList.pop_front();

        int curRowIdx = curSearchNode.first;
        int curColIdx = curSearchNode.second;

        if (curRowIdx == targetRowIdx && curColIdx == targetColIdx)
        {
            answer = dist[curRowIdx][curColIdx] + 1;
            break;
        }
        
        //À§, ¿Þ, ¿À, ¾Æ·¡
        pair<int, int> direction[4] = { make_pair(max(curRowIdx - 1, 0), curColIdx),
        make_pair(curRowIdx, max(curColIdx - 1, 0)) , make_pair(curRowIdx, min(curColIdx + 1, targetColIdx )) ,
        make_pair(min(curRowIdx + 1, targetRowIdx ), curColIdx) };

        for (int i = 0; i < 4; ++i)
        {
            int rowIdx = direction[i].first;
            int colIdx = direction[i].second;
            if (direction[i] != curSearchNode && maps[rowIdx][colIdx] != 0)
            {
                if (!visited[rowIdx][colIdx])
                {
                    nextSearchList.push_back(direction[i]);
                    visited[rowIdx][colIdx] = true;
                }

                if (dist[rowIdx][colIdx] > dist[curRowIdx][curColIdx] + 1)
                    dist[rowIdx][colIdx] = dist[curRowIdx][curColIdx] + 1;
            }
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> testcase = { {1, 0, 1, 1, 1},{1, 0, 1, 0, 1},{1, 0, 1, 1, 1},{1, 1, 1, 0, 1},{0, 0, 0, 0, 1} };
    solution(testcase);

    testcase.clear();
    
    testcase = { {1, 0, 1, 1, 1},{1, 0, 1, 0, 1},{1, 0, 1, 1, 1},{1, 1, 1, 0, 0},{0, 0, 0, 0, 1} };
    solution(testcase);

    return 0;
}