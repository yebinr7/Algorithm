#include <string>
#include <vector>

using namespace std;


long long solution(int n) 
{
    // 재귀로 하면 문제가 생기니.. 동적 계획법? 이용
    // 1~2000개 
    long long ways[2001];
    ways[0] = 0;
    ways[1] = 1;
    ways[2] = 2;
    // 피보나치 ?
    // ways(n) = ways(n-1) + ways(n-2);
    for (int i = 3; i <= n; ++i)
    {
        ways[i] = (ways[i - 1] + ways[i - 2])% 1234567;
    }


    long long answer = ways[n];
    return answer;
}