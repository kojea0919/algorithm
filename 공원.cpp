#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool IsCan(int widthIdx, int heightIdx, int size, vector<vector<string>>& park)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (park[i+ heightIdx][j+ widthIdx] != "-1")
                return false;
        }
    }

    return true;
}

int solution(vector<int> mats, vector<vector<string>> park) {

    sort(mats.begin(), mats.end(), greater<int>());

    int size = mats.size();

    for (int i = 0; i < size; ++i)
    {
        int heightSize = park.size() - mats[i];
        int widthSize = park[0].size() - mats[i];

        for (int heightIdx = 0; heightIdx <= heightSize; ++heightIdx)
        {
            for (int widthIdx = 0; widthIdx <= widthSize; ++widthIdx)
            {
                if (IsCan(widthIdx, heightIdx, mats[i], park))
                    return mats[i];
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> mats = { 1,2 };
    vector<vector<string>> park = { {"A","-1"},{"A","-1" }};

    int a= solution(mats, park);

    return 0;
}