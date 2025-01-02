#include <string>
#include <vector>

int solution(int n) {
    
    // n = 몫 * 나누는 수X +1 
    // x를 2부터 n-1 까지 반복해서 ->while문
    // 최소부터 최대까지 반복 해서 1 나머지 나오면 탈출
    int x = 2;
    while (true)
    {
        if (n % x == 1)
            break;
        x++;
    }
    return x;
    
}