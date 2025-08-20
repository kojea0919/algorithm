//#include <vector>
//#include <string>
//
//using namespace std;
//
//int solution(vector<string> storage, vector<string> requests) {
//    int answer = 0;
//
//    int Width = storage[0].size();
//    int Height = storage.size();
//
//    bool JiGae[50][50] = { false };
//    for (size_t Idx = 0; Idx < Width; ++Idx)
//    {
//        JiGae[0][Idx] = true;
//        JiGae[Height - 1][Idx] = true;
//    }
//    for (size_t Idx = 1; Idx < Height-1; ++Idx)
//    {
//        JiGae[Idx][0] = true;
//        JiGae[Idx][Width-1] = true;
//    }
//
//    size_t ReqCnt = requests.size();
//    for (size_t ReqIdx = 0; ReqIdx < ReqCnt; ++ReqIdx)
//    {
//        string CurReq = requests[ReqIdx];
//        char Target = CurReq[0];
//
//        //크레인 사용하는 경우
//        //------------------------------------------------
//        if (CurReq.size() == 2)
//        {
//            for (size_t HeightIdx = 0; HeightIdx < Height; ++HeightIdx)
//            {
//                for (size_t WidthIdx = 0; WidthIdx < Width; ++WidthIdx)
//                {
//                    //들어야 하는 경우
//                    //------------------------------------------
//                    if (Target == storage[HeightIdx][WidthIdx])
//                    {
//                        storage[HeightIdx][WidthIdx] = '0';
//                    }
//                    //------------------------------------------
//                }
//            }
//        }
//        //------------------------------------------------
//
//        else
//        {
//            for (size_t HeightIdx = 0; HeightIdx < Height; ++HeightIdx)
//            {
//                for (size_t WidthIdx = 0; WidthIdx < Width; ++WidthIdx)
//                {
//                    //들어야 하는 경우
//                    //------------------------------------------
//                    if (Target == storage[HeightIdx][WidthIdx] && JiGae[HeightIdx][WidthIdx])
//                    {
//                        storage[HeightIdx][WidthIdx] = '0';
//                    }
//                    //------------------------------------------
//                }
//            }
//        }
//    }
//
//
//
//    return answer;
//}
//
//int main()
//{
//
//    vector<string> testcase;
//    testcase.push_back("AZWQY");
//    testcase.push_back("CAABX");
//    testcase.push_back("BBDDA");
//    testcase.push_back("ACACA");
//
//    vector<string> requests;
//    requests.push_back("A");
//    requests.push_back("BB");
//    requests.push_back("A");
//
//    solution(testcase, requests);
//
//	return 0;
//}