#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& p1, const pair<int, int>& p2)
{
    return p1.second > p2.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;

    vector<pair<int, int>> OrangeCountVec(10000000, make_pair(0, 0));

    size_t size = tangerine.size();

    for (size_t i = 0; i < size; ++i)
    {
        int CurSize = tangerine[i];
        
        OrangeCountVec[CurSize].first = CurSize;
        ++OrangeCountVec[CurSize].second;
    }

    sort(OrangeCountVec.begin(), OrangeCountVec.end(), compare);

    size_t Count = 0;
    size = OrangeCountVec.size();
    for (size_t i = 0; i < size; ++i)
    {
        ++answer;
        Count += OrangeCountVec[i].second;
        if (Count >= k)
            break;
    }


    return answer;
}

int main()
{
    vector<int> testcase = { 1,1,1,1,2,2,2,3 };

    solution(2,testcase);

    return 0; 
}