// 괄호 회전하기
#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(string s) 
{
    // 모든 경우의 수로 나타내야 하나? 
    // s의 길이 size() 
    // 반복횟수
    // 왼쪽으로 회전한다는 말.. [0] 인덱스 값이 맨 끝으로 간다? ->덱? 
    // s에 [인덱스로 접근해서 값을 스택에 넣기? for-for  1000 * 1000 
    int size = s.size();
    int answer = 0;
    for (int i = 0; i < size; ++i) // 인덱스 움직이는 i 
    {
        stack<char> st;
        int n = size;
        int j = i;

      


        while (n > 0)
        {
          
            // 맨처음엔 넣어주기 
            if (st.empty())
            {
                st.push(s[j % size]);
            }
            else if(st.top() == '(')
            {
                if (s[j % size] == ')') // 합쳐져서 pop
                    st.pop();
                else
                    st.push(s[j % size]);
            }
            else if (st.top() == '{')
            {
                if (s[j % size] == '}')
                    st.pop();
                else
                    st.push(s[j % size]);
            }
            else if(st.top() == '[')
            {
                if (s[j % size] == ']')
                    st.pop();
                else
                    st.push(s[j % size]);
            }
            else // ] } ) or 비어있는 경우는 따로 위에서 관리(스택 터짐)
            {
                // 쌓기 
                st.push(s[j % size]);
            }

            ++j; //s의 인덱스 증가
            --n;
        }

        if(st.empty()) //다 비워지고 괄호들 다사라졌으면 통과 
        ++answer;

    }
    return answer;
}


int main(void)
{
    int sol1 = solution("[](){}");
    int sol2 = solution("}]()[{");
    int sol3 = solution("[)(]");
    int sol4 = solution("}}}");
}