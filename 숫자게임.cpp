#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int size = A.size();
    int bIdx = 0;
    for (int i = 0; i < size; ++i)
    {
        int a = A[i];
        int b = B[bIdx];

        while (a >= b)
        {
            ++bIdx;
            if (bIdx == size)
                return answer;

            b = B[bIdx];
        }
        if (a < b)
        {
            ++answer;            
        }

        ++bIdx;
        if (bIdx == size)
            break;
    }

    return answer;
}

int main()
{
    solution({ 3,3,3,3 }, { 4,4,4,4});
    return 0;
}