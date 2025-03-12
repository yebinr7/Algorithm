#include <string>
#include <vector>
// 가로 세로 길이 구하기 
// 가로 * 세로 => 격자의 총 개수 
// 총개수 - 브라운 = 옐로 

// 브라운은 한줄의 테두리!
// 꼭짓점 4군데 4개는 필수로 있고
// 나머지는 옐로의 가로세로 똑같이 따라감 
// 옐로의 가로 *2 
// 옐로의 세로 *2
// 따라서 공식은 4 + (옐로의 가로 + 옐로의 세로)*2 == 브라운의 개수 

// 옐로가 24라면.. 4 + ( x + y) * 2 == 24(브라운) 
//  x + y = (브라운-4) / 2; 
// 따라서 x + y = 10 -> xy =24 가 나오게 하는 xy는?
// x = 10 - y // (10-y)*y = 24 
// 10y -y^2 = 24 // y^2 -10y +24=0; 2차방정식 풀면... y는 6또는 4 
// 조건: 카펫의 가로 길이는 세로 길이와 같거나, 세로 길이보다 깁니다.
// 따라서 x = 6 , y = 4 -> 브라운은 2개씩 더 많으므로 8, 6 이 정답 
using namespace std;

vector<int> solution(int brown, int yellow) 
{
    // x * y = yellow 인 쌍들 구하기
    // 만약 그 쌍들이 X + Y == (brown-4)/2 라면 찾은거!
    int yellowWidth = 0;
    int yellowHeight = 0;
    vector<int> answer;
    // yellow가 한개 밖에 없을땐 예외처리
    if (yellow == 1)
    {
        yellowWidth = 1;
        yellowHeight = 1;
        answer.emplace_back(yellowWidth + 2);
        answer.emplace_back(yellowHeight + 2);
        return answer;
    }

    for (int x = 1; x <= yellow - x; ++x)
    {
        int y = 0;
        if (yellow % x == 0)
        {
            y = yellow / x;
            if (x > y) // = 같을경우도 해야함 제곱수 일수있기에 
                break; // 못찾은겨 
            if ((x + y) == (brown - 4) / 2 && (brown - 4) % 2 == 0)///*나누어떨어졌을때만*/
            {
                yellowHeight = x;
                yellowWidth = y; //가로가 더 길어야하므로 가로세로 바꿔서 넣기  
                break;
            }
        }
    }
    
    answer.emplace_back(yellowWidth + 2);
    answer.emplace_back(yellowHeight + 2);
    return answer;
}


int main(void)
{
    vector<int> answer1 = solution(10, 2);
    vector<int> answer2 = solution(8, 1);
    vector<int> answer3 = solution(24, 24);
    return 0;
}