// 크레인 인형 뽑기 게임
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) 
{
    // N * N 행렬
    int N = board.size();

    // 스택 N개 1~N  번의 스택 만든다. + 바구니 스택 만든다.
    // 런타임에서 개수 받아서 만들어야함; -> 스택벡터?

    //vector<stack<int>> stVec(board.size(), ; (개수, 초기화값) 문법 쓰려했는데 빡세네?

    // 0 은 없는거다!!!

    vector<stack<int>> stVec(N); //그냥.. stack<int> 가 N개 존재하게 만들기 (초기값 없음?)
    stack<int> baguni; // 뽑은걸 넣을 바구니..
    int answer = 0;

    // 모든 board 마지막행 부터 0행까지 바깥 벡터돌기 
    // 마지막열 ~ 마지막0열 까지 속벡터
    for (int row = N-1; row >= 0; --row)
    {
        for (int col = N - 1; col >= 0; --col) //마지막 행의 마지막 열부터 역으로 stack에 넣기
        {
            if (board[row][col] == 0)
                continue; // 아예 push X 

            //stVec[row].push(board[row][col]);
            stVec[col].push(board[row][col]);
        }
    }

    // moves 돌면서 그 값에 맞는 라인 단, -1 한 라인에서 뽑아야함 (인덱스 때문)
    for (auto m : moves)
    {
        int line = m - 1;
     
        if (!stVec[line].empty()) // 그 라인 안비었으면..
        {
            if (baguni.empty())
            {
                baguni.push(stVec[line].top()); 
                stVec[line].pop();
            }
            else
            {
                if (stVec[line].top() == baguni.top()) //같으면 
                {
                    // 바구니꺼 삭제 & 라인꺼도 삭제 & answer++ 2번
                    stVec[line].pop();
                    baguni.pop();
                    answer += 2; //이게 낫나 ++++ 이렇게 하는게 낫나? 
                }
                else // 다르면
                {
                    baguni.push(stVec[line].top());
                    stVec[line].pop();
                }
            }
        }
        // 라인 비어있었으면 그냥 통과(조건) 모두 0이라면 
    }


    
    return answer;
}

int main(void)
{
    int answer1 = solution({ {0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1} },{ 1, 5, 3, 5, 1, 2, 1, 4 });
}