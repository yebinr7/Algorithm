#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n, long long left, long long right)
{
    // 1차원 배열 요소로 설정

    // 패턴 -> 열과 행 비교해서 max 인 수가 요소의 값이다..!!!

    // 2차원 -> 1차원 인덱스 공식: (cols * RowIdx) + ColIdx; 
    //vector<int> array;
    //array.resize(n * n); // 배열 일단 0으로 모두 초기화 

    //// 대칭성 이용해야할거같은디..

    //for (size_t row = 0; row < n; ++row)
    //{
    //    for (size_t col = 0; col < n; col++)
    //    {
    //        size_t idx = (n * row) + col;
    //        array[idx] = std::max(row, col) + 1; // 둘중에 큰애 +1 한 값이 요소다!
    //    }
    //}
    //
    //vector<int> answer;
    //for (size_t i = left; i <= right; ++i)
    //{
    //    answer.emplace_back(array[i]);
    //}
    
    vector<int> answer;
    
    for (size_t i = left; i <= right; ++i)
    {
        int q = i / n; // 몫은 현재행의 인덱스
        int r = i % n; // 나머지는 현재 열의 인덱스 

        // 그 2차원 배열의 요소는.. 현재 행, 열 인덱스들 중 큰놈 +1 
        int num = std::max(q, r) + 1;
        answer.emplace_back(num);
    }


    return answer;
}