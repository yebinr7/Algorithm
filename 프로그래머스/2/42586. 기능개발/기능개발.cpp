#include <string>
#include <vector>
#include <algorithm>
#include <utility> // pair 사용 
#include <cstdint>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    // 프로그래스와 스피드 요소 동시에 for문 돌기
    
    // 프로그래스와 스피드 동시에 묶기..
    vector<pair<int, int>> progressesSpeeds;
    for (uint32_t i = 0; i < progresses.size(); ++i)
    {
        progressesSpeeds.emplace_back(progresses[i], speeds[i]); // 묶음 초기화! 
    }
    
    // 배포 벡터
    vector<int> answer;
    

    // 0일부터 100일까지 돌면 최소한 모두 다끝나게 되어있음
    for (size_t i = 0; i < 101; ++i)
    {
        // i는 지나는 일수 i 
        for (size_t idx = 0; idx < progressesSpeeds.size(); ++idx)
        {
            // 현재 일차에 완성된 프로젝트 있는지?
            if (progressesSpeeds[0].first >= 100) // 0번째꺼 완성됐다면..
            {
                uint32_t completeNum = 0;
                // 배포될 목록 탐색 
                bool bLeftComplete = true;
                auto new_end = remove_if(progressesSpeeds.begin(), progressesSpeeds.end(), [&completeNum, &bLeftComplete](pair<int, int> progress)
                    {
                        // 만족하는 애들 다 뒤로 옮기기 & 완성된 애들 숫자세기 
                        // 앞에 요소가 완성이 안됐다면 X 
                        if (progress.first >= 100 && bLeftComplete == true)
                        {
                            ++completeNum;
                            return true;
                        }
                        else if (bLeftComplete == false)
                        {
                            return false; //음..
                        }
                        else
                        {
                            if (progress.first < 100)
                            {
                                bLeftComplete = false; // 현재 100프로 못넘었다면 false로 바꾸기 
                                return false; //; 이거 없어서??
                            }
                        }
                    });
     
                // 배포되었으면 벡터에서 삭제!
                progressesSpeeds.erase(new_end, progressesSpeeds.end());

                // 배포 숫자 업데이트
                answer.emplace_back(completeNum);
            }
            else // 완성 안됐으면 나머지 프로그레스 각자 공식 맞춰서 업데이트
            {
                for (auto& pair : progressesSpeeds)
                {
                    pair.first += pair.second;

                }
            }

        }
    }

    return answer;
}

int main(void)
{
    vector<int> answer1 = solution({ 93, 30, 55 }, { 1, 30, 5});
    vector<int> answer2 = solution({ 95, 90, 99, 99, 80, 99 }, { 1, 1, 1, 1, 1, 1 });
}