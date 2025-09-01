#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;

    if (s / n == 0)
        return { -1 };

    while (s % n != 0)
    {
        answer.push_back(s / n);
        s -= s / n;
        --n;
    }

    for (int i = 0; i < n; ++i)
    {
        answer.push_back(s / n);
    }

    return answer;
}

int main()
{
    solution(2, 8);
    return 0;
}