#include <string>
#include <vector>
#include <sstream>
#include <cctype>
using namespace std;

/*
s는 길이 1 이상 200 이하인 문자열입니다.
s는 알파벳과 숫자, 공백문자(" ")로 이루어져 있습니다.
숫자는 단어의 첫 문자로만 나옵니다.
숫자로만 이루어진 단어는 없습니다.
공백문자가 연속해서 나올 수 있습니다.
*/

/*
"3people unFollowed me"	"3people Unfollowed Me"
"for the last week"	"For The Last Week"
*/


string solution(string s)
{
    // 문자열 하나씩 받기
    // 처음인 경우 s[0] 이 숫자인 경우 다음은 소문자 시작
    // 공백 다음은 무조건 대문자로 변환 

    ostringstream oss;
    char temp = '@'; // 맨처음
    char change = ' ';
    for (const auto& c : s)
    {
        if (temp == '@') // 처음인 경우
        {
            change = toupper(c);
            oss << change;
        }
        else if (temp == ' ') // 이전 문자가 공백이였다면.. 다음은 무조건 대문자
        {   
            change = toupper(c);
            oss << change; // 대문자로 변경해서 넘겨주기 
        }
        else
        {
            change = tolower(c);
            oss << change; // 나머지 경우는 그냥 소문자로 변환
        }
        temp = c; // 업데이트 해놓고
    }

    string answer = oss.str();
    return answer;
}

int main(void)
{
    string answer1 = solution("3people unFollowed me");
    string answer2 = solution("for the last week");
    return 0;
}