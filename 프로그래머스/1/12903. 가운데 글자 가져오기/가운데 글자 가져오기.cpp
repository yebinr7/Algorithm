#include <string>
#include <vector>

using namespace std;

string solution(string s) {

    //가운데 글자 반환
    //짝수 글자라면 가운데 2개 글자 반환 
    //인덱스로 접근해보기 [0] ~ [size()-1]까지 가운데 인덱스는 (0 + size()-1) / 2

    //가운데 인덱스 구하기
    //등차수열의 합 / 모든항의 개수 = 평균값
    //인덱스가 홀수 인경우 -> 한개

    string answer;
    if (s.size() % 2 == 1)
    {
        int num = s.size(); //항의 개수 
        int sum = (num * (0 + num - 1)) / 2;//등차합
        //평균의 인덱스
        int avgIdx = sum / num;
        answer={ s[avgIdx] };
    }
    else
    //인덱스가 짝수 인경우 -> 가운데 2개
    {
        int num = s.size(); //항의 개수 
        int sum = (num * (0 + num - 1)) / 2;//등차합
        //평균의 인덱스
        int avgIdx = sum / num;
        answer.push_back({ s[avgIdx] });
        answer.push_back({ s[avgIdx+1] });
    }
   
    return answer;
}