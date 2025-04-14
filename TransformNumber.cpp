#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int solution(int x, int y, int n) {
    if (x == y)
        return 0;

    queue<pair<int,int>> xQueue;
    set<int> xSet;
    xQueue.push({x,0});
    xSet.insert(x);

    while (!xQueue.empty())
    {
        int xNum = xQueue.front().first;
        int depth = xQueue.front().second;
        xQueue.pop();

        int newX = xNum + n;
        if (newX < y && xSet.find(newX) == xSet.end())
        {
            xQueue.push({ newX,depth + 1 });
            xSet.insert(newX);
        }
        else if (newX == y)
            return depth + 1;

        newX = xNum * 2;
        if (newX < y && xSet.find(newX) == xSet.end())
        {
            xQueue.push({ newX,depth + 1 });
            xSet.insert(newX);
        }
        else if (newX == y)
            return depth + 1;

        newX = xNum * 3;
        if (newX < y && xSet.find(newX) == xSet.end())
        {
            xQueue.push({ newX,depth + 1 });
            xSet.insert(newX);
        }
        else if (newX == y)
            return depth + 1;
    }

    return -1;
}


int main()
{
    solution(2, 40, 5);
    return 0;
}