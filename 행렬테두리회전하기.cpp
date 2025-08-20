//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
//    vector<int> answer;
//
//    vector<vector<int>> maps;
//    int n = 1;
//    for (int row = 0; row < rows; ++row)
//    {
//        vector<int> part;
//        for (int column = 0; column < columns; ++column)
//        {
//            part.push_back(n++);
//        }
//        maps.push_back(part);
//    }
//
//    int size = queries.size();
//    for (int i = 0; i < size; ++i)
//    {
//        vector<vector<int>> copyMaps = maps;
//
//        int startRow = queries[i][0] - 1;
//        int startCol = queries[i][1] - 1;
//
//        int endRow = queries[i][2] - 1;
//        int endCol = queries[i][3] - 1;
//        int min = rows * columns;
//
//        for (int colIdx = startCol; colIdx < endCol; ++colIdx)
//        {
//            copyMaps[startRow][colIdx + 1] = maps[startRow][colIdx];
//            copyMaps[endRow][colIdx] = maps[endRow][colIdx + 1];
//
//            if (copyMaps[startRow][colIdx + 1] < min)
//                min = copyMaps[startRow][colIdx + 1];
//
//            if (copyMaps[endRow][colIdx] < min)
//                min = copyMaps[endRow][colIdx];
//        }
//
//        for (int rowIdx = startRow; rowIdx < endRow; ++rowIdx)
//        {
//            copyMaps[rowIdx + 1][endCol] = maps[rowIdx][endCol];
//            copyMaps[rowIdx][startCol] = maps[rowIdx+1][startCol];
//
//            if (copyMaps[rowIdx + 1][endCol] < min)
//                min = copyMaps[rowIdx + 1][endCol];
//
//            if (copyMaps[rowIdx][startCol] < min)
//                min = copyMaps[rowIdx][startCol];
//        }
//
//        maps = move(copyMaps);
//        answer.push_back(min);
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<vector<int>> queries = { {1,1,2,2},{1,2,2,3},{2,1,3,2},{2,2,3,3} };
//    solution(3, 3, queries);
//
//    return 0;
//}
//
