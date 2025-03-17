#include <string>
#include <vector>

using namespace std;

string bubbleString(string s)
{
    // 다 한칸씩 왼쪽으로 옮기는거 백업하고 옮기고 백업하고 옮기고..

    // 그냥 [0] 자른다음에 [0]을 마지막에 추가하기..
    string leftMove = s.substr(1, s.size() - 1);
    leftMove += s[0]; // 맨마지막에 첫번째꺼 옮기기
    return leftMove;
}

bool countString(string s)
{
    // string의 문자 하나씩 받아서 스택에 쌓기
    vector<char> stack;
    bool bCorrect = true;
    for (const auto c : s)
    {
        // 스택에 맨처음 쌓기
        if (stack.size() == 0)
        {
            // 왼쪽 방향만 쌓을 수 있다.
            if (c == '(' || c == '[' || c == '{')
                stack.push_back(c);
            else
            {
                bCorrect = false;
                break; // 오른쪽 들어왔으면 이미 끝
            }
        }
        else // 맨 처음이 아니라면..
        {
            // 스택에 쌓여있는 애와 비교해본다.

            char back = stack.back();

            // 1. back과 c가 같은 방향이라면?
            if ((back == ('(')) ||
                (back == ('[')) ||
                (back == ('{')))
            {
                if (c == '(' || c == '[' || c == '{')
                {
                    stack.push_back(c);  // 스택에 무조건 쌓기
                }
                else // 다른방향 ) ] } 
                {
                    if (back == '(')
                    {
                        if (c == ')')
                        {
                            // 손잡고 ㅃㅃ
                            stack.pop_back();
                        }
                        else // ( - },]
                        {
                            bCorrect = false;
                            break;
                        }
                    }
                    else if (back == '[')
                    {
                        if (c == ']')
                        {
                            stack.pop_back();
                        }
                        else
                        {
                            bCorrect = false;
                            break;
                        }
                    }
                    else
                    {
                        if (c == '}')
                        {
                            stack.pop_back();
                        }
                        else
                        {
                            bCorrect = false;
                            break;
                        }
                    }
                }
               
            }
            else // back 이 ) ] }
            {
                if (c == ')' || c == ']' || c == '}')
                    stack.push_back(c);  // 스택에 무조건 쌓기
                else // ( [ { 
                {
                    // )(, )[ 이런식으로 만난 경우 무조건  안됨; 
                    bCorrect = false;
                    break;
                }
            }

        }
    }
    
    // 스택에 하나라도 쌓여있으면 {{ 이런식으로 쌓인 상태다.
    if (stack.size() != 0)
        return false;

    return bCorrect;
}


int solution(string s) 
{


    int bCount = 0;
    string rotationString = s;
    for (size_t i = 0; i < s.size(); ++i)
    {
        if (i == 0)
        {
            if (countString(rotationString))
                bCount++;
        }
        else
        {
            rotationString = bubbleString(rotationString);
            if (countString(rotationString))
                bCount++;
        }
       
    }
   


    int answer = bCount;
    return answer;
}

int main(void)
{

    int answer1 = solution("[](){}");
    int answer2 = solution("}]()[{");
    int answer3 = solution("[)(]");
    int answer4 = solution("}}}");
    int answer5 = solution("(){{");
    return 0;

}