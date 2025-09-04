// 9.4 행렬의 곱셈
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    //vector<vector<int>> answer;
    

    int rows = arr1.size(); 
    int cols = arr2[0].size();
    //answer.reserve(rows * cols); // 미리 크기 확보 -> ;오류남 0으로 초기화해야함
    
    /*for (int i = 0; i < rows * cols; ++i)
        answer.emplace_back(0);*/
    // 이것때문에 ㅅㅄㅄㅄㅄㅂ

    vector<vector<int>> answer(rows, vector<int>(cols,0));


    for (int row = 0; row < rows; ++row) // 행 
    {
        for (int col = 0; col < cols; ++col) // 열 
        {
            for (int k = 0; k < arr1[0].size(); ++k) // A의 열 또는 B의 행이 대칭으로 
            {
               /* int a = arr1[row][k];
                int b = arr2[k][col];
                int ab = a * b;*/
               answer[row][col] += arr1[row][k] * arr2[k][col];
            }
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