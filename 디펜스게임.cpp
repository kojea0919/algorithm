#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, int k, vector<int> enemy) {
    int answer = 0;

    size_t size = enemy.size();

    priority_queue<int> prevEnemy;
    for (size_t i = 0; i < size; ++i)
    {
        prevEnemy.push(enemy[i]);    

        answer = i;
        n -= enemy[i];
        if (n == 0 && k == 0)
            return answer + 1;


        while (n < 0)
        {
            if (k == 0)
            {
                return answer;
            }

            n += prevEnemy.top();
            prevEnemy.pop();
            --k;
        }
    }
    return answer + 1;
}

int main()
{
    vector<int> enemy = { 1,2,3, 10 };
    int a= solution(6, 1, enemy);
    return 0;
}