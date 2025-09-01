#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;

    int size = stations.size();
    int start = 0;
    for (int i = 0; i < size; ++i)
    {      
        int curStation = stations[i];
        int end = stations[i] - w - 1;
        if (end <= 0)
        {
            start = curStation + w;
            continue;
        }

        int range = end - start;
        if (range <= 0)
        {
            start = curStation + w;
            continue;
        }

        int count = 2 * w + 1;

        answer += range / count;
        if (range % count != 0)
            ++answer;

        start = curStation + w;
    }

    if (start < n)
    {
        int range = n - start;
        int count = 2 * w + 1;

        answer += range / count;
        if (range % count != 0)
            ++answer;
    }

    return answer;
}

int main()
{
    solution(11, {1,3,4,11}, 1);

    return 0;
}