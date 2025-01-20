#include <string>
#include <vector>
using namespace std;
string solution(string s)
{
    //반복문 돌면서 문자 바꾸기
    //공백 문자 만난다면.. 자신의 idx를 빼서 생각 
    //h e l l o   m y   name is kim
    //0 1 2 3 4 5 6 7 8 9
    int flexibleIdx = 0;//짝홀 판별
    for (size_t idx = 0; idx < s.size(); idx++)
    {
        //대문자면 소문자로 바꾸기 
        if (s[idx] >= 'A' && s[idx] <= 'Z')
            s[idx] += 'a' - 'A';

        if (flexibleIdx % 2 == 0)
        {
           
            if (s[idx] == ' ')//공백문자 만난다면..
            {
                flexibleIdx = 0; //다시 0으로..
                continue;
            }
            else
            {
                s[idx] -= ('a' - 'A');//대문자로 바꾸기 
                flexibleIdx++;
            }
        }
        else //홀수라면
        {

            if (s[idx] == ' ')//공백문자 만난다면..
            {
                flexibleIdx = 0; //다시 0으로..
                continue;
            }
            else
            {
                flexibleIdx++;
            }
        }
    }
    return s;
}
