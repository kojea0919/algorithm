//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//vector<int> solution(vector<int> fees, vector<string> records) {
//    vector<int> answer;
//
//    int baseTime = fees[0];
//    int baseCharge = fees[1];
//    int unitTime = fees[2];
//    int unitCharge = fees[3];
//
//    map<int, pair<int,int>> inCarMap;
//    map<int, int> carAccTimeMap;
//    
//    size_t size = records.size();
//    for (size_t idx = 0; idx < size; ++idx)
//    {
//        string curInfo = records[idx];
//
//        int h = 10 * (curInfo[0] - '0') + curInfo[1] - '0';
//        int m = 10 * (curInfo[3] - '0') + curInfo[4] - '0';
//
//        int carNumber = 1000 * (curInfo[6] - '0') + 100 * (curInfo[7] - '0')+
//            10 * (curInfo[8] - '0') + curInfo[9] - '0';
//        string action = curInfo.substr(11);
//
//        if (action == "IN")
//            inCarMap.insert(make_pair(carNumber, make_pair(h, m)));
//        else
//        {
//            pair<int, int> inTimeInfo = inCarMap[carNumber];
//            inCarMap.erase(carNumber);
//
//            carAccTimeMap[carNumber] += (h - inTimeInfo.first) * 60 + m - inTimeInfo.second;
//        }
//    }
//
//    map<int, pair<int, int>>::iterator iter = inCarMap.begin();
//    map<int, pair<int, int>>::iterator endIter = inCarMap.end();
//    for (;iter != endIter;)
//    {
//        int carNumber = iter->first;
//        carAccTimeMap[carNumber] += (23 - iter->second.first) * 60 + 59 - iter->second.second;
//        iter= inCarMap.erase(iter);
//    }
//
//    map<int, int>::iterator accMapIter = carAccTimeMap.begin();
//    map<int, int>::iterator accMapEndIter = carAccTimeMap.end();
//    for (;accMapIter != accMapEndIter;++accMapIter)
//    {
//        int time = ceil((accMapIter->second - baseTime) / (double)unitTime);
//        int charge = baseCharge + max(0, time * unitCharge);
//        answer.push_back(charge);
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> fees = { 120, 0, 60, 591 };
//    vector<string> testcase = { "16:00 3961 IN","16:00 0202 IN","18:00 3961 OUT","18:00 0202 OUT","23:58 3961 IN" };
//    solution(fees, testcase);
//    return 0;
//}