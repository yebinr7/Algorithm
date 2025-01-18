#include <string>
#include <vector>

using namespace std;
int solution(int n)
{
    //stoi 이용해도됨
    //3진법 으로 바꾸고
    //3진법 뒤집기 -> 한번에 받으면서 순서 바꾸기
    int Num = n;
    int q = 0;
    int reverseSum =0;
    while(Num!=0)
    {
        q = Num%3;
        Num/=3;
        reverseSum = (reverseSum + q)*3;
    }
    //reverseSum/=3;
    return reverseSum/3;
}
