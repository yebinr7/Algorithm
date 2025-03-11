#include <string>
#include <vector>

using namespace std;
// 재귀는 스택메모리에 쌓이는 거라 위험한데;




int Fibonacci(int n)
{
    /*if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return Fibonacci(n - 1) + Fibonacci(n - 2);*/

    long long fibo1 = 0;
    long long fibo2 = 1;
    long long fibo3 = 0;

    
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else // 2이상
    {
        for (size_t i = 2; i <= n; ++i)
        {
            fibo3 = (fibo1 + fibo2) % 1234567;
            fibo1 = fibo2;
            fibo2 = fibo3;
        }
    }
    return fibo3;
}

int solution(int n) 
{
    int answer = Fibonacci(n) ;
    return answer;
}


// 피보나치 나머지 패턴존재하는가? 
int main(void)
{
    int answer1 = Fibonacci(3);
    int answer2 = Fibonacci(5);
    int answer3 = Fibonacci(100);
    int answer4 = Fibonacci(100'000);
    return 0;
}
