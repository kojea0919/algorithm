//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int>	solution(int n)
//{
//	vector<int> answer;
//	
//	vector<vector<int>> triangle;
//	for (int i = 0; i < n; ++i)
//	{
//		triangle.push_back(vector<int>(n, 0));
//	}
//
//	int curNum = 1;
//	int lastNum = n * (n + 1) / 2;
//	int dRow[] = { 1, 0, -1 };
//	int dCol[] = { 0, 1, -1 };
//	int row = 0, col = 0;
//	int dirIdx = 0;
//	while (curNum <= lastNum)
//	{
//		triangle[row][col] = curNum++;
//
//		int nextTargetRow = row + dRow[dirIdx];
//		int nextTargetCol = col + dCol[dirIdx];
//		if (nextTargetRow >= n || nextTargetCol >= n || triangle[nextTargetRow][nextTargetCol] != 0)
//		{
//			dirIdx = (dirIdx + 1) % 3;
//		}
//		row += dRow[dirIdx];
//		col += dCol[dirIdx];
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			int curNum = triangle[i][j];
//			if (curNum != 0)
//				answer.push_back(curNum);
//			else
//				break;
//		}
//	}
//	return answer;
//}
//
//int main()
//{
//	solution(6);
//	return 0;
//}
//
