// 카드 뭉치
#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) 
{
    //stack<string> cd1st(cards1.rbegin(), cards1.rend()); //; 스택은 이렇게 초기화 하는 법 없나?
    stack<string> cd1st; //["i", "drink", "water"]
    stack<string> cd2st; //["want", "to"]	

    for (auto iter = cards1.rbegin(); iter != cards1.rend(); ++iter) //; 엇 역으로 iter할땐 -- 해야하나;; 헷갈리네 
    {
        cd1st.push(*iter);
    }

    for (auto iter = cards2.rbegin(); iter != cards2.rend(); ++iter) //; 엇 역으로 iter할땐 -- 해야하나;; 헷갈리네 
    {
        cd2st.push(*iter);
    }

    for (const auto& s : goal) // 원소 하나씩 순서대로 돌면서.. 
    {
        //;스택 empty 방어코드 필요한가? 주어진 문자열이 완벽한 경우..라서 필요 없으려나?  -> 디버깅중 발견.. 넣어줘야함 그래야 체크할때 안터짐
        if (!cd1st.empty()&& s == cd1st.top()) //; 이렇게 문자열의 비교가 가능한 이유는 string클래스 덕분?
        {
            cd1st.pop(); //; return Yes No 중 하나니깐 굳이 완성된 문자열 만들필요없다
        }
        else if (!cd2st.empty() && s == cd2st.top())
        {
            cd2st.pop();
        }
        else
        {
            // 없으면 무조건 No 
            return "No"; //; RVO 적용시키기! 
        }
    }

    //  ;위의 반복문을 지나왔다면 무조건 되는거..

    //string answer = "";
    return "Yes"; //;RVO 적용 시키기! 
}

int main(void)
{
    string answer1 = solution({ "i", "drink", "water" }, { "want", "to" }, { "i", "want", "to", "drink", "water" });
    string answer2 = solution({ "i", "water", "drink" }, { "want", "to" }, { "i", "want", "to", "drink", "water" });
    return 0;
}