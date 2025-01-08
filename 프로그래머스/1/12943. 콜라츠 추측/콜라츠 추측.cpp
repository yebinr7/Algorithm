#include <string>
#include <vector>

using namespace std;
static int loopNum = 0;
int solution(int num) 
{

    /*
    1-1. 입력된 수가 짝수라면 2로 나눕니다.
    1-2. 입력된 수가 홀수라면 3을 곱하고 1을 더합니다.
    2. 결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.
    */

    while (num != 1) //1이면 탈출 
    {
        loopNum++; 
        if (loopNum>500)
            break;

        if (num % 2 == 0)
            num /= 2;
        else if(num%2 ==1)//홀수 조건문 ..
            num = num * 3 + 1;
    }

    if (num == 1)
        return loopNum;
    else
        return -1;
}
