#include <string>
#include <vector>
#include <math.h>
using namespace std;

int GetDivisorSum(int n)
{
    //0. 체 이용해서 약수의 개수? 
    //제곱근처리
    int divisioNum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n == 1)
            divisioNum++;
        else if (n % i == 0)
        {
            if (i == n / i)
            {
                divisioNum++;
                break;
            }
            divisioNum += 2;
        }
        
    }
    return divisioNum;
}

int solution(int number, int limit, int power)
{

    //각 숫자의 약수의 개수 구하고 
    //만약 협약보다 크다면 패널티로 '정해진 수치' 무기 사야함 


    
    int iIronNeeded = 0; //필요로하는 철의 개수
    //각 1~ number까지 각각 약수의 개수 구한다.
    //구해야 하는 것은 총 무게의 합 
    //N번 반복하면서 철의 무게 누적으러 구한다! 

    for (size_t i = 1; i <=number; i++)
    {
        //1. 현재 숫자 i 의 약수개수들을 구한다.
        int iDivisors = GetDivisorSum(i);
        //2. 제한 수치를 넘었는 지 확인
        if (iDivisors > limit)
        {
            //넘었다면 패널티로 정해져있는 power가 할당된다.->철 도  power만큼만 듬
            iIronNeeded += power;
        }
        else
        {
            iIronNeeded += iDivisors;
        }
    }
    return iIronNeeded;
}