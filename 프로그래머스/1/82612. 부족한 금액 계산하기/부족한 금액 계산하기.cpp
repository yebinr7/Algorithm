#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
long long solution(int price, int money, int count)
{
    //count 번 타고 싶다면 1~count 까지 1*price + 2*price+...+count*price 의 총합 과
    //가진 money를 빼서 음수 가 나오면 돈이 부족한거니, 음수를 양수로 바꿔서 리턴
    //가진 돈이 충분하다면 0 리턴
    //처음 가진돈 10억까지 count 2500번 ; 2500*2500 곱하면 10자리 넘어가니깐 long long 이용 
    long long sum = 0;

    //for (size_t i = 1; i <= count; i++)
    //{
    //    //등차합의 공식 or 평균값(소수나오면안됨)X 
    //    //price(1+2+3...+count) 
    //    //등차수열의 합 
    //}
	sum = price * (count*(1 + count) / 2.0);
    long long dif = money - sum;
    return (dif >= 0) ? 0 : abs(dif);

}