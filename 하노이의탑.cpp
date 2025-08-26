#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;

    answer.push_back(vector<int>({ 1,3 }));

    for (int i = 1; i < n; ++i)
    {
        vector<vector<int>> temp;
        int size = answer.size();
        for (int stepIdx = 0; stepIdx < size; ++stepIdx)
        {
            int start = answer[stepIdx][0];
            int dest = answer[stepIdx][1];
            if (start == 2 || start == 3)
                start = 5 - start;
            if (dest == 2 || dest == 3)
                dest = 5 - dest;

            temp.push_back(vector<int>({ start, dest}));
        }

        temp.push_back(vector<int>{1, 3});

        for (int stepIdx = 0; stepIdx < size; ++stepIdx)
        {
            int start = answer[stepIdx][0];
            int dest = answer[stepIdx][1];
            if (start == 2 || start == 1)
                start = 3 - start;
            if (dest == 2 || dest == 1)
                dest = 3 - dest;

            temp.push_back(vector<int>{start, dest});
        }

        answer = move(temp);
    }

    return answer;
}

int main()
{
    solution(3);
    return 0;
}