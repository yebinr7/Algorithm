#include <iostream>
#include <cmath>
using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;

    int A = a;
    int B = b;
    
    int round = 0;
    while(true)
    {
        
        
        //탈출조건 : 번호가 같아짐
        if(A == B)
            break;
        
        // 매 라운드 특징 짝수라면 /2 홀수라면 +1하고 /2
        if(A%2==0)
        {
            A = A / 2;
        }
        else
        {
            A = (A+1)/2;
        }
        
        if(B%2==0)
        {
            B = B / 2;
        }
        else
        {
            B = (B+1) / 2; 
        }
        
        ++round;
    }
    
    answer = round;
    return answer;
}