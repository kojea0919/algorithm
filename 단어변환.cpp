#include <string>
#include <vector>
#include <map>

using namespace std;

map<string, bool> visit;

void dfs(string begin, const string& target, map<string, vector<string>>& canChangeMap, int& min, int depth)
{
    if (begin == target)
    {
        min = min > depth - 1 ? depth - 1 : min;
        return;
    }

    for (const string & str : canChangeMap[begin])
    {       
        if (!visit[str])
        {
            visit[str] = true;
            dfs(str, target, canChangeMap, min, depth + 1);
            visit[str] = false;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;

    words.push_back(begin);
    size_t worldLen = begin.size();
    size_t size = words.size();
    map<string, vector<string>> canChangeMap;
 
    for (size_t i = 0; i < size - 1; ++i)
    {
        const string& s1 = words[i];
        visit.insert(make_pair(s1, false));
        for (size_t j = i + 1; j < size; ++j)
        {
            if (i == j) continue;
            const string& s2 = words[j];

            size_t diffCnt = 0;
            for (size_t idx = 0; idx < worldLen; ++idx)
            {
                if (s1[idx] != s2[idx])
                {
                    ++diffCnt;
                    if (diffCnt == 2)
                        break;
                }
            }
            if (diffCnt == 1)
            {
                canChangeMap[s1].push_back(s2);
                canChangeMap[s2].push_back(s1);
            }
        }
    }

    answer = 51;
    visit[begin] = true;
    dfs(begin, target, canChangeMap, answer, 0);

    return answer != 51 ? answer : 0;
}

int main()
{
    solution("hit", "cog", { "hot", "dot", "dog", "lot", "log", "cog" });

    return 0;
}