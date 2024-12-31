#include <string>
#include <vector>

int solution(int n)
{
    unsigned short divisorArray[3001] = { 0, }; // 초기화된 배열
    int sum = 0;

    for (int i = 1; i <= n; i++)  // 1부터 n까지의 약수를 체크
    {
        if (n % i == 0) 
        {
            divisorArray[i] = i; // i가 약수라면 배열에 저장
        }
    }

    for (int i = 1; i <= n; i++) 
    {
        sum += divisorArray[i]; // 저장된 약수를 모두 합산
    }

    return sum;
}
