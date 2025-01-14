#include <string>
#include <vector>

using namespace std;
string solution(int n) 
{
    string answer = "";
    //1이면 수 2면 수박 3이면 수박수 
    for (int i = 0; i < n; i++)
    {
        //i가 짝수이면 '수'
        if (i % 2 == 0)
            answer += "수";
        //i가 홀수이면 '박'
        else
            answer += "박";
    }

    return answer;
}