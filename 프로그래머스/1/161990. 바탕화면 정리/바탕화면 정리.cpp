#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 행렬처럼 3행 5열 이런식이다.
// para로 들어오는 string 벡터행렬은 {.....} 열의 요소들이 들어오는 것
// ex) 3행 5열 행렬의 행벡터들 {"....#"}, {"..##."}, {"...##"}
// 1행 5열, 2행 (3, 4)열,  3행(4, 5)열 에 파일이 존재한다면..
// 무조건 맨왼쪽 상단(맨위쪽 행 +맨 왼쪽열== 최소행, 최소열) 포함 
//  맨 오른쪽(맨아래쪽 행 + 맨오른쪽 열)포함되야함!

// 1. 들어온 string for문으로 받으면서 (최소행과 최소열) + (최대행+1, 최대열+1) 얻어온다
// 2. 벡터에 최소행 최소열, 최대행, 최대열 
// 3. 이동거리 계산해야함..





vector<int> solution(vector<string> wallpaper) 
{
    // "....#"
    // 매번 받을 때 마다 최대 최소 비교해서 넣기

    //vector<pair<int, int>> fileIndex;
    vector<int> rowIndex;
    vector<int> colIndex;

    int minRow = 0;
    int minCol = 0;
    int maxRow = 0;
    int maxCol = 0;

    for (size_t row = 0; row < wallpaper.size(); row++) // 행돌기
    {
        for (size_t col = 0; col < wallpaper[row].size(); col++) // 열돌기
        {
            // 일단 '#' 있는 행과 열 싹다 저장해오기
            if (wallpaper[row][col] == '#')
            {
                //fileIndex.emplace_back(row, col); // (make_pair( row,col )); 알아서 임시Pair 만들어버리나?
                rowIndex.emplace_back(row);
                colIndex.emplace_back(col);
            }
        }
    }
    sort(rowIndex.begin(), rowIndex.end());
    sort(colIndex.begin(), colIndex.end());

    // 벡터에서 최대 최소 바로 할 수 있는지.. 확인;

    minRow = rowIndex[0];
    minCol = colIndex[0];

    
    maxRow = rowIndex[rowIndex.size()-1];
    maxCol = colIndex[colIndex.size()-1];


    vector<int> answer;

    answer.emplace_back(minRow);
    answer.emplace_back(minCol);
    answer.emplace_back(maxRow + 1);
    answer.emplace_back(maxCol + 1);

    return answer;
}