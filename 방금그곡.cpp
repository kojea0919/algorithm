//#include <string>
//#include <vector>
//
//using namespace std;
//
//string ChangeCode(string& code)
//{
//    string newString;
//    size_t size = code.size();
//
//    for (size_t i = 0; i < size; ++i)
//    {
//        if (i + 1 < size && code[i + 1] == '#')
//        {
//            newString.push_back(code[i] + 32);
//            ++i;
//        }
//        else
//            newString.push_back(code[i]);
//    }
//
//    return newString;
//}
//
//string solution(string m, vector<string> musicinfos) {
//    m = ChangeCode(m);
//
//    int targetPlayTime = 0;
//    string targetName = "(None)";
//
//    size_t size = musicinfos.size();
//    for (size_t i = 0; i < size; ++i)
//    {
//        string str = musicinfos[i];
//        string startTime = str.substr(0, 5);
//        string endTime = str.substr(6, 5);
//        int pos = str.find(',', 12);
//        string name = str.substr(12,pos - 12);
//        string code = str.substr(pos + 1, str.size() - pos);
//
//        int playTime = atoi(endTime.substr(0, 2).c_str()) * 60 + atoi(endTime.substr(3, 2).c_str()) -
//            atoi(startTime.substr(0, 2).c_str()) * 60 - atoi(startTime.substr(3, 2).c_str());
//
//        int t = playTime;
//
//        code = ChangeCode(code);
//        int codeLen = code.size();
//        int q = t / codeLen;
//        int r = t % codeLen;
//        string allCode;
//
//        for (int j = 0; j < q; ++j)
//        {
//            allCode += code;
//        }
//        allCode += code.substr(0, r);
//
//        if (allCode.find(m) != string::npos)
//        {
//            if (targetPlayTime < playTime)
//            {
//                targetName = name;
//                targetPlayTime = playTime;
//            }
//        }
//    }
//
//    return targetName;
//}
//
//int main()
//{
//    vector<string> musicinfos = { "12:00,12:14,HELLO,C#DEFGAB", "13:00,13:05,WORLD,ABCDEF","12:00,12:15,HELLO,C#DEFGAB" };
//    string m = "ABC";
//    string result = solution(m, musicinfos);
//    return 0;
//}