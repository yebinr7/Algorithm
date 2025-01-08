#include <string>
#include <vector>

//테스트
long long solution(int a, int b);

long long ABiggerB(int a, int b)
{
    return solution(b, a);
}
long long solution(int a, int b) 
{

    long long AtoBSum = 0;
    if (a == b)
        return a;
    else if (a < b)
    {
        for (long long i = a; i <= b; i++)
        {
            AtoBSum += i;
        }
        return AtoBSum;
    }
    else
        return ABiggerB(a, b);
}


