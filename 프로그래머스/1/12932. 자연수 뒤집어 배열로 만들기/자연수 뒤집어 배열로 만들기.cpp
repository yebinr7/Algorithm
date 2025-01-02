#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) 
{
    vector<int> answer;
    // 숫자 들어오면 10으로 나눠서 나머지 배열에 차례로 집어넣기 
    while (true)
    {
        answer.emplace_back(n % 10);
        n /= 10; //몫으로 덮어쓰기

        //탈출 조건: 10으로 더이상 안나눠질때, 몫이 0일때
        if (n == 0)
            break;
    }
    return answer;//RVO 개입됨 
}