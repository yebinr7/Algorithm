#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    vector<vector<int>> answer; // 행렬 C 

    int cRow = arr1.size();
    int cCol = arr2[0].size();

    // C의 행 초기화
    answer.resize(cRow); // resize는 0으로 초기화 됨

    // C의 열 모두 초기화 
    for(int i=0; i<answer.size(); ++i)
        answer[i].resize(cCol); // [0]만했었다면.. 0행만 모두 열이 초기화되어서 터짐 

    int aRowsCol = 0; // A행의 열요소 담는
    int bColsRow = 0; // B열의 행요소 담는 

    for (int row = 0; row < cRow; ++row) // C의 행돌면 서
    {
        
        for (int col = 0; col < cCol; ++col) // C의 열 돌기 
        {
            int sum = 0;
            for (int i = 0; i < arr2.size(); ++i) // a의 열 과 b의 행 같은개수임!
            {
                sum += arr1[row][i] * arr2[i][col]; 
            }
            answer[row][col] = sum; // 
        }
    }

    return answer;
}

int main(void)
{
    vector<vector<int>> answer1 = solution({ {1, 4 }, { 3, 2 }, { 4, 1} },
                                            { {3, 3}, { 3, 3 } });
    vector<vector<int>> answer2 = solution({ {2, 3, 2}, { 4, 2, 4 }, { 3, 1, 4 } }, 
                                            { { 5, 4, 3 }, { 2, 4, 1 }, { 3, 1, 1 } });

    return 0;
}