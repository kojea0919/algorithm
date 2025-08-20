//#include <string>
//#include <vector>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//
//int answer = 0;
//vector<bool> isPrime;
//set<int> s;
//
//void SetPrimeNumber()
//{
//    isPrime[0] = false;
//    isPrime[1] = false;
//
//    int size = isPrime.size();
//    for (int i = 2; i < size; ++i)
//    {
//        if (isPrime[i])
//        {
//            for (int m = 2; i * m < size; ++m)
//            {
//                isPrime[i * m] = false;
//            }
//        }
//    }
//}
//
//void Permutation(const string& numbers, string curNumber, vector<bool>& visit,int n, int k)
//{
//    if (curNumber.size() == k)
//    {        
//        int curNum = atoi(curNumber.c_str());
//        if (curNumber[0] != '0' && isPrime[curNum])
//        {
//            s.insert(curNum);
//        }
//        return;
//    }
//
//    int size = numbers.size();
//    for (int i = 0; i < size; ++i)
//    {
//        if (visit[i])
//            continue;
//        
//        visit[i] = true;
//        Permutation(numbers, curNumber + numbers[i], visit, n, k);
//        visit[i] = false;
//    }
//}
//
//int solution(string numbers) {
//    int answer = 0;
//    sort(numbers.begin(), numbers.end(), greater<>());
//
//    isPrime.assign(atoi(numbers.c_str()) + 1, true);
//
//    SetPrimeNumber();
//
//    int size = numbers.size();
//    for (int i = 1; i <= size; ++i)
//    {        
//        s.clear();
//        vector<bool> visit(size, false);
//        Permutation(numbers, "", visit, size, i);
//        answer += s.size();
//    }
//
//    return answer;
//}
//
//int main()
//{
//    solution("011");
//    return 0;
//}