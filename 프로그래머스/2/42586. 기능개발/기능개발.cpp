// 기능 개발
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
    vector<int> rProgresses(progresses.rbegin(), progresses.rend()); // 역으로 초기화
    vector<int> rSpeeds(speeds.rbegin(), speeds.rend());



    // 배포마다 완료된 작업의 개수 
    vector<int> answer;

    while (rProgresses.size()!=0) // 모두 팝되면 끝 
    {
        // 하루마다 올라가는 진행률
        for (int i = rProgresses.size()-1; i >= 0; --i) //; >0 이 아닌 >=로 해야 0까지 적용됨..
        {
            rProgresses[i] += rSpeeds[i]; // 진행률 올라갔을때. 
        }
        
        // 다시 반복문으로 체크(완성된거 있나) // ;마지막 값 확인하는법 .back?
        if (rProgresses[rProgresses.size()-1] >= 100) //배포날짜.
        {
            int complete = 0;
            for (int i = rProgresses.size() - 1; i >= 0; --i) //; >0 이 아닌 >=로 해야 0까지 적용됨..
            {
                if (rProgresses[i] >= 100)
                {
                    rProgresses.pop_back();
                    ++complete;
                }
                else // 100 못넘었으면 바로 반복문 끝
                {
                    break;
                }
            }
            answer.emplace_back(complete);
        }
        
    }



    return answer;
}

int main(void)
{
    vector<int> sol1 = solution({ 93, 30, 55 }, { 1, 30, 5 });
    vector<int> sol2 = solution({ 95, 90, 99, 99, 80, 99 }, { 1, 1, 1, 1, 1, 1 });
}