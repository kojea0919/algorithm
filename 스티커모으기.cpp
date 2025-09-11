#include <iostream>
#include <vector>
using namespace std;

int FindMax(const vector<int> & sticker)
{
    size_t size = sticker.size();
    if (size == 1)
        return sticker[0];
    else if (size == 2)
        return max(sticker[0], sticker[1]);

    vector<int> maxVec(sticker.size(), 0);

    maxVec[0] = sticker[0];
    maxVec[1] = sticker[1];
    maxVec[2] = max(sticker[0]+sticker[2], sticker[1]);
    for (int i = 3; i < size; ++i)
    {
        int exclude = maxVec[i-1];
        int include = maxVec[i-2] + sticker[i];
        include = max(include, maxVec[i - 3] + sticker[i]);

        maxVec[i] = include > exclude ? include : exclude;
    }

    return maxVec[size - 1];
}

int solution(vector<int> sticker)
{
    int answer = 0;

    if (sticker.size() == 1)
        return sticker[0];

    vector<int> firstInclude(sticker.begin(), sticker.begin() + sticker.size() - 1);
    vector<int> firstExclude(sticker.begin() + 1, sticker.begin() + sticker.size());

    answer = max(FindMax(firstInclude), FindMax(firstExclude));

    return answer;
}

int main()
{
    solution({ 4, 3, 2, 9, 4 });
    return 0;
}