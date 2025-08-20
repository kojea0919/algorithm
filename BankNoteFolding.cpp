//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> wallet, vector<int> bill)
//{
//	int answer = 0;
//
//	int walletWidth = wallet[0];
//	int walletHeight = wallet[1];
//
//	int billWidth = bill[0];
//	int billHeight = bill[1];
//
//	while (true)
//	{
//		if ((billWidth <= walletWidth && billHeight <= walletHeight) ||
//			(billWidth <= walletHeight && billHeight <= walletWidth))
//			break;
//
//		++answer;
//		if (billWidth > billHeight)
//			billWidth /= 2;
//		else
//			billHeight /= 2;
//
//	}
//	return answer;
//}
//
//int main()
//{
//	vector<int> wallet;
//	wallet.push_back(50);
//	wallet.push_back(50);
//	vector<int> bill;
//	bill.push_back(100);
//	bill.push_back(241);
//
//	int result = solution(wallet, bill);
//
//	return 0;
//}