
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages) 
{
    // N 스테이지 개수 N+1은 마지막까지 깬 유저(완료한유저)
    // stages(현재 유저가 진행중인 스테이지,==못깬스테이지)

    vector<int>failStageVec(N+2, 0); // N+1개 해야만 인덱스 N까지 사용가능하기에 ->;; 수정 N+2 해야 N+1 스테이지도 받음(완료한 유저)
    // [0스테이지] [1스테이지] [2스테이지] [3스테이지] .... [N스테이지]

    int remainUser = stages.size(); // 처음 유저수 

    vector<pair<double, int>> failurePairVec;

    for (int fs : stages) // 일단 실패한 스테이지 개수 기록  O(20만) 
    {
        // 클리어 못한 스테이지 기록하기
        failStageVec[fs]++;
    }

    //1번 스테이지 부터 끝까지 실패율과 스테이지 번호 맵에 기록
    for (int i = 1; i < N + 1; ++i)
    {
        // 만약 N 번째 인덱스(스테이지)에 0인것은 아무도 성공 못했다-> 실패율 0퍼로 바꾸기 

        /*if (remainUser == 0)
            break;*/
        if (remainUser == 0)
        {
            failurePairVec.emplace_back(0.0,i);
            continue;
        }
        failurePairVec.emplace_back(((double)failStageVec[i] / remainUser), i);
        remainUser -= failStageVec[i]; // 남은 유저 업데이트 
    }
   

    // 일단 한번 

    // 람다로 조건 만들어서 sort
    std::sort(failurePairVec.begin(), failurePairVec.end(),
        [](const pair<double, int>& lhs, const pair<double, int>& rhs)
        {
            //확률이 같다면 -> 0도? 
            if (lhs.first == rhs.first)
                return lhs < rhs; //오름차순
            else // 확률이 다르면 확률 높은 순서로 내림차순 
                return lhs > rhs; //내림차순
        });

    vector<int> answer;
    for (const auto& p : failurePairVec)
    {
        answer.emplace_back(p.second); //인덱스 넣기
    }

    return answer;

    
}