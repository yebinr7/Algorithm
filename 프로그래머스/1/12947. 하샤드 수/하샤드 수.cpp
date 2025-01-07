#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
    //1. 들어온 숫자 자리수 모두 더하기 
    int32_t q = x;
    int32_t rSum = 0;
    while (true)
    {
        //탈출조건: 더이상 안나눠질때
        if (q == 0)
            break;

        rSum += q % 10;
        q /= 10;
    }
    if (x % rSum == 0)
        return true;
    else
        return false;
}