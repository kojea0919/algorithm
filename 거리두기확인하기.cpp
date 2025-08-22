#include <string>
#include <vector>

using namespace std;

vector<vector<short>> dx = { { -1,1,0 } ,{ -1,1,0 },{ 0,0,-1 },{ 0,0,1 } };
vector<vector<short>> dy = { { 0,0, 1 } ,{ 0,0,-1 },{ -1,1,0 },{ -1,1,0 } };
short fourDirX[] = { 0,0,-1,1 };
short fourDirY[] = { 1,-1,0,0 };
//down, up, left, right

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;

    size_t placeSize = places.size();
    size_t heightSize = places[0].size();
    size_t widthSize = places[0][0].size();

    for (size_t placeIdx = 0; placeIdx < placeSize; ++placeIdx)
    {
        bool b = true;
        for (size_t heightIdx = 0; heightIdx < heightSize; ++heightIdx)
        {
            for (size_t widthIdx = 0; widthIdx < widthSize; ++widthIdx)
            {
                char c = places[placeIdx][heightIdx][widthIdx];

                if (c != 'P')
                    continue;

                for (size_t dirIdx = 0; dirIdx < 4; ++dirIdx)
                {
                    short newHeightIdx = heightIdx + fourDirY[dirIdx];
                    short newWidthIdx = widthIdx + fourDirX[dirIdx];

                    if (newHeightIdx < 0 || newWidthIdx < 0 ||
                        newHeightIdx >= heightSize || newWidthIdx >= widthSize)
                        continue;

                    char target = places[placeIdx][newHeightIdx][newWidthIdx];
                    if (target == 'P')
                    {
                        answer.push_back(0);
                        b = false;
                        break;
                    }
                    else if (target == 'O')
                    {
                        for (size_t i = 0; i < 3; ++i)
                        {
                            short hIdx = newHeightIdx + dy[dirIdx][i];
                            short wIdx = newWidthIdx + dx[dirIdx][i];
                            
                            if (hIdx < 0 || wIdx < 0 ||
                                hIdx >= heightSize || wIdx >= widthSize)
                                continue;

                            if (places[placeIdx][hIdx][wIdx] == 'P')
                            {
                                answer.push_back(0);
                                b = false;
                                break;
                            }
                        }
                    }
                    if (!b)
                        break;
                }
                if (!b)
                    break;
            }
            if (!b)
                break;
        }
        if (b)
            answer.push_back(1);
    }
    return answer;
}

int main()
{
    vector<vector<string>> places = 
        { {"POOOP", "OPOOO", "OOOOO", "OOOOO", "OOOOO"},
        {"POOPX", "OXPXP", "PXXXO", "OXXXO", "OOOPP"},
        {"PXOPX", "OXOXP", "OXPOX", "OXXOP", "PXPOX"},
        {"OOOXX", "XOOOX", "OOOXX", "OXOOX", "OOOOO"},
        {"PXPXP", "XPXPX", "PXPXP", "XPXPX", "PXPXP"} };

    solution(places);

    return 0;
}