#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct info
{
    int num;
    int playCnt;

    info(int a, int b) : num(a), playCnt(b) {}
};

bool cmp(const info& a, const info& b)
{
    if (a.playCnt == b.playCnt)
    {
        return a.num < b.num;
    }
    else
        return a.playCnt > b.playCnt;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> count;
    map<string, vector<info>> infoMap;

    size_t size = genres.size();
    for (size_t i = 0; i < size; ++i)
    {
        count[genres[i]] += plays[i];
        infoMap[genres[i]].push_back(info(i, plays[i]));
    }

    for (auto& e : infoMap)
    {
        sort(e.second.begin(), e.second.end(), cmp);
    }

    vector<pair<string, int>> temp;
    for (auto& e : count)
    {
        temp.push_back(e);
    }

    sort(temp.begin(), temp.end(), [](const auto& a, const auto& b)
        {
            return a.second > b.second;
        });

    for (const auto& e : temp)
    {
        string cur = e.first;

        if (infoMap[cur].size() == 1)
            answer.push_back(infoMap[cur][0].num);
        else
        {
            answer.push_back(infoMap[cur][0].num);
            answer.push_back(infoMap[cur][1].num);
        }
    }

    return answer;
}

int main()
{
    solution({ "classic", "pop", "classic", "classic", "pop" },
        { 500, 600, 150, 800, 2500 });
    return 0;
}