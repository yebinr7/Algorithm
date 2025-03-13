#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b)
{
    // 두 수의 최대 공약수 
    // 연습해왔던 유클리드 알고리즘 이용
    
    while (b!=0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int LCM(int a, int b)
{
    // 두수의 LCM 공식 
    // 최대공약수 k 
    // A = ak , B = bk
    // LCM = a * b * k
    // A * B = a * b * k * k 
    // a * b * k = A * B / k 

    return a * b / GCD(a, b);
}



int solution(vector<int> arr) 
{
    // 현재 인덱스와 다음 인덱스 애의 최소공배수 구하면서 누적으로 쌓기
    int answer = arr[0]; // 처음 수
    for (int i = 1; i < arr.size(); ++i)
    {
        answer = LCM(answer, arr[i]);
    }


    
    return answer;
}


int main(void)
{
    int answer1 = solution({ 2,6,8,14 });
    int answer2 = solution({ 1,2,3 });
    int answer3 = solution({ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 });
    return 0;
}