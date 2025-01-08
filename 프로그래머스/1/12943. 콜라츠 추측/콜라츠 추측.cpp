#include <string>
#include <vector>

static int functionCallNum = 0;

using namespace std;
static int loopNum = 0;
int solution(int num) 
{

    /*
    1-1. 입력된 수가 짝수라면 2로 나눕니다.
    1-2. 입력된 수가 홀수라면 3을 곱하고 1을 더합니다.
    2. 결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.
    */
    long long collatz = num;
    while (collatz != 1) //1이면 탈출 
    {
        loopNum++; 
        if (loopNum>500)
            break;

        if (collatz % 2 == 0)
            collatz /= 2;
        else//홀수 조건문 ..
            collatz = collatz * 3 + 1; //여기서 int 넘어가는거 조심 
    }

    if (collatz == 1)
        return loopNum;
    else
        return -1;
}

int main(void)
{
    //solution(16);
    int answer = solution(17);
	  int answer2 = solution(626331); //여기 488이나옴 500이 안찍힘
 
	return 0;
}
