//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
//    vector<int> answer;
//
//    int size = name.size();
//    map<string, int> m;
//    for (int i = 0; i < size; ++i)
//    {
//        m.insert(make_pair(name[i], yearning[i]));
//    }
//
//    size = photo.size();
//    for (int i = 0; i < size; ++i)
//    {
//        int peopleNum = photo[i].size();
//        int score = 0;
//        for (int j = 0; j < peopleNum; ++j)
//        {
//            score += m[photo[i][j]];
//        }
//        answer.push_back(score);
//    }
//    return answer;
//}
//
//int main()
//{
//    return 0;
//}