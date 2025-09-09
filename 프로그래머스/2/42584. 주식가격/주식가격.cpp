#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) 
{
    // <인덱스, 누적시간> 
    //stack <std::pair<int, int>> st; 
    // 누적 시간 인덱스들의 차이로 해결
    stack<int> st; //인덱스
    vector<int> answer(prices.size(), 0); // 0으로 일단 모든 유지기간 초기화

    // 핵심 힌트.. i가 현재 시간이고 인덱스들 빼면 유지 기간 나옴 i - 이전인덱스(시간) == 얼마나 살아있었는지 
    for (int i = 0; i < prices.size(); ++i)
    {
        // 스택에 넣기 전에 스택이 비었나 확인 -> 비었으면 바로 넣고 끝
        if (st.empty() || prices[st.top()]<=prices[i])
            st.emplace(i); //값은 어차피 prices에 접근하면 알수있으니깐.. 인덱스를 넣어버리기;
        else if(prices[st.top()]>prices[i])// 현재가격이 이전값보다 떨어졌다면..
        {
            
            while (prices[st.top()] > prices[i] /*&& st.empty()!=false*/)
            {
                int topIdx = st.top();
                answer[topIdx] = i - topIdx; //현재시간 - 그시각 ==> 누적시간으로 됨
                st.pop(); // 스택 
                if (st.empty())
                    break;
            }
            //answer[i - 1] = i - (i - 1); //유지기간 1초 ㅋㅋ
            //st.pop(); //이전꺼 pop(확정됐으니깐)
            st.emplace(i); //현재 인덱스 넣기 

        }
       
    }

    while (!st.empty())
    {
        answer[st.top()] = (prices.size()-1) - st.top(); // 전체시간 - 자신의 인덱스  => 유지기간
        st.pop();
    }

    
    return answer;
}

int main(void)
{
    vector<int> answer1 = solution({ 1, 2, 3, 2, 3 });
    vector<int> answer2 = solution({ 1,50,60,5,3 });
    return 0;
}