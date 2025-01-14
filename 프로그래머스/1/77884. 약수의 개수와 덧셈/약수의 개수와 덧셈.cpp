#include <string>
#include <vector>

using namespace std;

int solution(int left, int right)
{
    //[left, right] 사이의 숫자 하나씩 모두 약수의 개수 확인
    //짝수개면 +그숫자, 홀수개면 -그숫자
    int answer = 0;
    for (size_t i = left; i <= right; i++)
    {
        size_t iNum = 0;
        //i의 약수들이 짝수개인지 홀수개인지 판별
        for (size_t j = 1; j <= i; j++)
        {
            if (i % j == 0)//나누어 떨어지면 약수 
                iNum++;//대칭 신경안써도 됨 약수 개수 세는거니깐 
        }
        if (iNum % 2 == 0)//짝수개라면
            answer += i;
        else
            answer -= i;
    }
    return answer;
}