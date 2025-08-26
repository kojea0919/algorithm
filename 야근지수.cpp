#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;

    vector<int> workTimeCount(1000001, 0);
    size_t size = works.size();
    for (size_t i = 0; i < size; ++i)
    {
        ++workTimeCount[works[i]];
    }

    for (int i = 1000000; i >= 1; --i)
    {
        int timeCount = workTimeCount[i];
        if (n <= timeCount)
        {
            workTimeCount[i] -= n;
            workTimeCount[i - 1] += n;
            break;
        }
        else
        {
            n -= workTimeCount[i];
            workTimeCount[i - 1] += workTimeCount[i];
            workTimeCount[i] = 0;
        }
    }

    for (size_t i = 0; i <= 1000000; ++i)
    {
        answer += i * i * workTimeCount[i];
    }

    return answer;
}

int main()
{
    solution(1, { 2,1,2 });
    return 0;
}