#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;

    vector<vector<bool>> isPuddles(n,vector<bool>(m,false));
    int size = puddles.size();
    for (int i = 0; i < size; ++i)
    {
        isPuddles[puddles[i][1] - 1][puddles[i][0] - 1] = true;
    }


    vector<vector<int>> pathCntVec(n,vector<int>(m,0));
    pathCntVec[0][0] = 1;
    for (int height = 0; height < n; ++height)
    {
        for (int width = 0; width < m; ++width)
        {
            if (height == 0 && width == 0)
                continue;

            if (isPuddles[height][width])
            {
                pathCntVec[height][width] = 0;
                continue;
            }

            int upCnt = height - 1 < 0 ? 0 : pathCntVec[height - 1][width];
            int leftCnt = width - 1 < 0 ? 0 : pathCntVec[height][width - 1];
            pathCntVec[height][width] = (upCnt + leftCnt) % 1000000007;
        }
    }

    return pathCntVec[n-1][m-1];
}

int main()
{
    solution(4, 3, { {2,2} });
    return 0;
}