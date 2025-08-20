//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//void Combine(const string& order,int idx ,int k,string combine, vector<string> & result)
//{
//    if (combine.size() == k)
//    {
//        result.push_back(combine);
//        return;
//    }
//
//    int size = order.size();
//    for (int i = idx; i < size; ++i)
//    {
//        combine.push_back(order[i]);
//        Combine(order, i + 1, k, combine, result);
//        combine.pop_back();
//    }
//}
//
//vector<string> solution(vector<string> orders, vector<int> course) {
//    vector<string> answer;
//
//    vector<map<string, int>> result(course.size());
//
//    int orderNum = orders.size();
//    for (int i = 0; i < orderNum; ++i)
//    {
//        string order = orders[i];
//        sort(order.begin(), order.end());
//       
//        int courseNum = course.size();
//        for (int idx = 0; idx < courseNum; ++idx)
//        {
//            int k = course[idx];
//
//            vector<string> combine;
//            Combine(order, 0, k, "", combine);
//
//            for (auto& courseMenu : combine)
//            {               
//                ++result[idx][courseMenu];
//            }
//        }
//    }
//
//    for (auto& r : result)
//    {        
//        int max = 0;
//        vector<string> course;
//
//        for (auto & c : r)
//        {
//            if (c.second < 2)
//                continue;
//
//            if (c.second > max)
//            {
//                course.clear();
//                max = c.second;
//                course.push_back(c.first);
//            }
//            else if (c.second == max)
//                course.push_back(c.first);
//        }
//
//        for(int i = 0 ; i < course.size(); ++i)
//            answer.push_back(course[i]);
//    }
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}
//
//int main()
//{
//    vector<string> orders = { "XYZ", "XWY", "WXA" };
//    vector<int> course = { 2,3,4 };
//
//    solution(orders, course);
//    return 0;
//}