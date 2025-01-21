#include <string>
#include <vector>

using namespace std;

int solution(string t, string p)
{
    //p의 길이 확인 
    //t를 p의 길이로 쪼개기(왼쪽부터)
    //쪼개진 t`들과 p를 비교해가며 p보다 작은 t`들의 개수 리턴하기 
    int tSize = t.size();//이렇게 따로 빼는거 최적화에 의미있나??? 
    int pSize = p.size();
    long long pNum = stoll(p); //int는 32비트 유효숫자 10자리
    long long tSubNum = 0; //longlong 64비트 20자리 
    int answer = 0;
    //[012][123][234] 이런식 idx<= <idx+size()
    for (size_t i = 0; i < tSize; i++)
    {
        //1. 스트링 자르기
        if (i + pSize > tSize) //인덱스 초과시 
            break;
        std::string substr = t.substr(i, pSize/*개수*/);
        //2. 숫자로 만들기
        tSubNum = stoll(substr);
        //3. 비교하기 
        if (tSubNum <= pNum)
            answer++;
    }
    return answer;
}