#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;

    unordered_set<int>  SumValueSet;

    int Size = elements.size();
    for (int Idx = 0; Idx < Size; ++Idx)
    {
        int CurElement = elements[Idx];

        SumValueSet.insert(CurElement);
        for (int SumCount = 1; SumCount < Size; ++SumCount)
        {
            int NewIdx = (Idx + SumCount) % Size;
            CurElement += elements[NewIdx];

            SumValueSet.insert(CurElement);
        }
    }

    answer = SumValueSet.size();

    return answer;
}

int main()
{
    vector<int> testcase = { 7,9,1,1,4 };

    solution(testcase);


    testcase.clear();
    testcase = { 1,1,1,1,1 };
    solution(testcase);

    return 0;
}