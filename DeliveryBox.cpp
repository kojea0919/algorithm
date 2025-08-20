//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//int solution(vector<int> order) {
//    int answer = 0;
//
//    size_t size = order.size();
// 
//    size_t orderIdx = 0;
//    stack<int> subContainer;
//    queue<int> orderQueue;
//
//    for (size_t idx = 0; idx < size; ++idx)
//    {
//        int curBoxNumber = idx + 1;
//
//        subContainer.push(curBoxNumber);
//        orderQueue.push(order[idx]);
//
//        int frontOrderBoxNumber = orderQueue.front();
//
//        if (frontOrderBoxNumber == curBoxNumber)
//        {
//            subContainer.pop();
//            orderQueue.pop();
//            ++answer;
//
//            while (!orderQueue.empty() || !subContainer.empty())
//            {
//                int frontOrderBoxNumber = orderQueue.front();
//                int subContainerBoxNumber = subContainer.top();
//                if (frontOrderBoxNumber == subContainerBoxNumber)
//                {
//                    ++answer;
//                    subContainer.pop();
//                    orderQueue.pop();
//                }
//                else if (frontOrderBoxNumber < subContainerBoxNumber)
//                {
//                    return answer;
//                }
//                else
//                    break;
//            }
//        }
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> order = { 3,4,1,2,5 };
//    solution(order);
//
//    return 0;
//}