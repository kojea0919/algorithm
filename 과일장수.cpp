#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    sort(score.begin(), score.end(), greater<int>());

    int size = score.size() / m;
    for (int i = 0; i < size; ++i)
    {
        int sum = 0;
        int price = score[i * m + m - 1];      

        answer += price * m;
    }

    return answer;
}

int main()
{
    solution(3, 4, { 1,2,3,1,2,3,1 });
    return 0;
}