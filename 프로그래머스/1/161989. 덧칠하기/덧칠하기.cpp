#include <string>
#include <vector>
#include <iostream>
#include <array>
using namespace std;
// n미터 벽 1미터 구역씩 n개로 나눔 1번인덱스~ n번 인덱스까지 
    // 칠할 구역은 최소 1번은 무조건 칠해야함 
    // 다시 칠할 구역 담긴 벡터 section, section의 원소는 오름차순으로 정렬되어 있습니다.
    // 롤러가 4m인경우 	[2, 3, 6]
    // 1 2 3 4 5 6 7 8 
    //   2 2 2 2
    //     3 3 3 3
    //           6 6 6
    //  2번~4 + 5~8 총 2번만 칠하면됨 

    //n: 5미터, 롤러 m: 4미터 [1, 3]
    // 1 2 3 4 5
    // 1 1 1 1 ->3구역까지 이미 칠해짐 ㅇㅇ 1번

    //n: 4미터, 롤러1m [1, 2, 3, 4]	
    // 1 2 3 4 
    // 1 
    //   2
    //     3
    //       4 //이렇게 총 4번해야 구역 다칠할 수 있음 

int solution(int n, int m, vector<int> section) 
{
    //m,n 1이상 10만 이하 
    // O(N) -> 1000만까지 가능
    //std::array<int, 100'000 > wall{}; //0으로 일단 다 초기화 0~ 99'999
    std::vector<int>wall(100'001,0);// 0~100'000인덱스 ->100'001개 


    size_t paintedNum = 0;

    //  section에서 구역 받아온다.
    for (auto sec : section)
    {
        if (wall[sec] != 0)
            continue;
        else //0이라면..처음 칠해지는 곳
        {
            size_t endIdx = sec + m;
            if (endIdx > 100'000)
                endIdx = 100'000;//방어코드
            for (size_t i = sec; i < endIdx; i++)
                ++wall[i];


            //페인트했으니 ++
            ++paintedNum;
        }
    }

    int answer = paintedNum;
    return answer;
}

int main(void)
{
    int sol = solution(4, 1, { 1,2,3,4 });
    return 0;
}
