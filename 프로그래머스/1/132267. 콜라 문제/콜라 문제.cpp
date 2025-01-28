#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b, int n)
{   //빈병 a개 -> b병의 새콜라 
    //빈병 n개 -> 총 몇병의 새콜라? 
    //빈병이 a개미만이면 당연히 

    //b<a 2 ,3 이라고 치자 빈병3개 -> 새콜라2개  
    //1. n개의 빈병 a개씩 묶어서 n / a  * b =>C 묶음당 b개 새로받은 콜라 
    //총있는 빈병과 새병  C(새병) + (n % a 빈병) 

    //2. 반복
    int remainBottle = n; //남아있는 빈병
    int newBottle = 0; //빈병을 통해 교환해 얻은 콜라 
    int newBottleSum = 0; //교환해 얻은 콜라들의 누적합 
    while (remainBottle >= a) //묶을 수 없다면 탈출 
    {
        newBottle = remainBottle / a * b;
        newBottleSum += newBottle;
        remainBottle = newBottle + remainBottle % a; //다 마시고 빈병 
    }
    return newBottleSum;
}

