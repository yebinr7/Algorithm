#include <iostream>

using namespace std;
int solution(int n)
{
   //자리수는 가중치, 나머지 개념이다.
    //10의 1승으로 나누면 나머지는 10의 0승 가중치
    //10의 2승으로 나누면 나머지는 10의 1승 가중치
    //10의 3승으로 나누면 나머지는 10의 2승 가중치
    //...
    //결국 나머지 * 가중치 의 합이 곧 원래 숫자가 된다.
    int sum = 0;
    int quotient = n;
    //반복문 이용!
    while (true)
    {
       

        int remainder = quotient % 10; //마지막 10 미만의 수가 남을 경우 ex) 9%10 은? 
        quotient /= 10; //몫은 다음자리수로 넘어가는 수! 
        sum += remainder;

        //탈출 조건: 남은 수가 0이 될때 == 10으로 나눴을때 몫이 0일때 
        if (quotient == 0)
            break;
    }

    return sum;
}