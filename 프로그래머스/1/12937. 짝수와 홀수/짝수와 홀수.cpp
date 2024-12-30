#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    //짝수의 정의: 2로 나누어 지는 정수 n = 2k
    //홀수의 정의: 2로 나누어 지지 않는 정수 n = 2k + 1
    string answer;

    //0도 나눠져야 한다.
    if (num % 2 == 0)
    {
       // string answer = "Even";틀린 이유 다시 string으로 선언해버림;;
        answer = "Even";
    }
    else if (num == 0)
    {
       // string answer = "Even";틀린 이유 다시 string으로 선언해버림;;

        answer = "Even";
    }
    else
    {
       // string answer = "Odd";틀린 이유 다시 string으로 선언해버림;;

        answer = "Odd";
    }

    return answer;
}