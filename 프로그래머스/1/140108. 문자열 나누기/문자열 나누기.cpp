#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    // 들어온 S의 첫번째 캐릭터  X 저장해두고 누적수
    // 그다음에 X가 아닌 애들 X`판별해서 누적 수  세기 
    // X수와 `X 수 같아지면 탈출후 현재 인덱스 부터 substring해서 다시 시작 
    // 재귀는 위험해 보임 문자열 1만이라 
    int answer = 0;
    while (true)//문자 한개남으면 끝 
    {
        char X = s[0]; //옮기기 
        int xNum = 1;
        int nxNum = 0;
        bool bEnd = false;
        for(int i =0; i<s.size(); i++)
        {
            if (xNum == nxNum)//탈출조건 
            {
                s = s.substr(i+1, s.size()); //덮어 씌우기 
                answer++;
                if (s == "")
                    bEnd = true;
                break;
            }


            if (X == s[i + 1] && (i + 1) != s.size()) //마지막일때 인덱스 침범안하도록 조심 
                xNum++;
            else if (X != s[i + 1] && (i + 1) != s.size())
                nxNum++;
             else if ((i + 1) == s.size())
            {
                answer++;
                bEnd = true;
                break;
            }
        } 
        if (bEnd)
            break;
    }

    return answer;
}