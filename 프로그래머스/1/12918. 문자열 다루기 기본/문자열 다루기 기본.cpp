#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    //stoi 사용불가 ?
    //size()체크 4와 6
    //처음 숫자가 0이 char가 아니라면... false
    //모두 숫자라면 true
    if (s.size() == 4 || s.size() == 6)
    {
		if (s[0] >= '0' && s[0] <= '9')
        {
            size_t idx = 0; //왜 int는 안되지? size_t만
            size_t num = std::stoi(s, &idx);
            return  idx == s.size();//숫자만 있었으면 다음인덱스 가르킴==사이즈랑 같아짐
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}