#include <iostream>
#include<string>
#include <stack>
using namespace std;

int solution(string s)
{
    
    stack<char> st;

    for (char c : s)
    {
        // 비어 있으면 추가
        // 존재하면 top -> 같으면 pop // 다르면 push
        if (st.empty())
            st.push(c);
        else
        {
            if (st.top() == c) // 같으면 함께 pop
                st.pop();
            else // 다르면 푸시 
                st.push(c);
        }

    }
    
    if (st.empty())
        return 1;
    else
        return 0;

}

int main(void)
{
    int sol1 = solution("baabaa");
    int sol2 = solution("cdcd");
    return 0;
}