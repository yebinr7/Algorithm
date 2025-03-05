#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

string solution(string s) 
{
    // 요소 하나 하나 받아서 stoi 사용
    // min max 이용
    vector<int> vec;

    bool bMinus = false;

    // 공백 만나기 전까지는... 같은 숫자다! 

    

    ostringstream temp;
    for (int i = 0; i < s.size(); ++i)
    {
         

       // -도 char인것! 
        if (s[i] == '-')
        {
            bMinus = true;
            continue;
        }
        else if (s[i] == ' ')
        {
            // 양수인 경우
            if (!bMinus)
            {
                vec.emplace_back(stoi(temp.str()));
                temp.str("");   // 버퍼를 비움
                temp.clear();   // 스트림 상태 초기화

            }
            else // 음수인 경우 
            {
                vec.emplace_back(-1 * stoi(temp.str()));
                bMinus = false; // 다시 음수 꺼주기 
                temp.str("");   // 버퍼를 비움
                temp.clear();   // 스트림 상태 초기화
            }
        }
        else
        {
            // 공통적으로 '-'와 ' ' 가 아니면 temp에 쌓기
            temp << s[i];
        }

       
        // 마지막 처리
        if (i == s.size() - 1)
        {
            if (!bMinus)
            {
                vec.emplace_back(stoi(temp.str()));
                temp.str("");   // 버퍼를 비움
                temp.clear();   // 스트림 상태 초기화

            }
            else // 음수인 경우 
            {
                vec.emplace_back(-1 * stoi(temp.str()));
                bMinus = false; // 다시 음수 꺼주기 
                temp.str("");   // 버퍼를 비움
                temp.clear();   // 스트림 상태 초기화
            }
        }
       
     
       // flag 이용해서 전에 '-'였다면 음수화 시켜서 넣기 stoi 굳이 안써도 될듯? stoi 그리고 char에선 못쓰나
    }
    auto iter = std::minmax_element(vec.begin(), vec.end());
    
    string answer = "";
    answer += to_string(*(iter.first));
    answer += ' ';
    answer += to_string(*(iter.second));

    return answer;
}

int main(void)
{
    string answer1 = solution("1 2 3 4");
    string answer2 = solution("-1 -2 -3 -4");
    string answer3 = solution("-1 -1");
    return 0;
}
