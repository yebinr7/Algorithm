#include <string>
#include <vector>
#include <utility> // std::pair를 사용하기 위한 헤더
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location)
{
    // location 맨처음에 priorities에 정렬되어 있는 인덱스 순서 

    // priorities 우선순위 벡터 

    // Max 값 찾기 ex) 9 
    // Max 값의 개수 찾기 -> Max값의 개수 하나씩 줄어들면서 결국 0이되면 다음으로 큰 Max값으로 갱신하기 

    // 우선순위 벡터 pair 벡터로 만들기 ( pair 통해서 원래 인덱스 알아내려고 or 벡터를 2개 만들어서 하나는 우선순위 벡터 하나는 인덱스 순서? 이건 너뭉어렵다.)

    // 1. pair 벡터 만들기
    vector<std::pair<int, int>> pairVector;
    int idx = 0;
    for (auto p : priorities)
    {
        pairVector.emplace_back(p, idx);
        ++idx;
    }

    // 2. pairVector에서 first 요소중 최대값 알아내고 개수 확인해서 초기화 시키기
        // 벡터 내부에서 최대 값 찾기 & 개수 알아내기 

    // 첫 반복문 시작
    auto maxPair = std::max_element(pairVector.begin(), pairVector.end());
    int max = (*maxPair).first;
    int maxCount = 0;

    int cnt = 1; // 지금 몇번째인지??????????????? 처음에 바로 찾으면 첫번째 리턴

    // 벡터 내부에서 최대 값 찾기 & 개수 알아내기 
    for (const auto& p : pairVector)
    {
        if (max == p.first)
            ++maxCount;
    }

    // while 문으로 들어가기 
    while (true) // 탈출조건: 하단에 있음
    {
        while (maxCount != 0) // max 개수가 0개 될때까지 반복
        {
            // [0] 체크하면서 뒤로 삭제 or 뒤로 옮기기

            if (pairVector[0].second == location && pairVector[0].first== max) // [0]에 위치하고 우선순위가 제일 높을때(최대값과 같을때)
            {
                // 일단 내가 찾는 인덱스 값인 지 확인 
                return cnt;
            }
            else
            {
                // 1. max랑 같으면 삭제 -> O(n) 0번째 삭제할때 왼쪽으로 다 옮겨야 하니깐...
                if (pairVector[0].first == max)
                {
                    pairVector.erase(pairVector.begin()); // 0 번째 요소 삭제 

                    --maxCount; // max count 하나 감소 

                    // 삭제 했으면 cnt 증가!!!!!!!!!!! 삭제된 개수가 곧 실행갯수임 (큐에서 삭제되면서 실행되는거니깐) 
                    ++cnt;
                }
                else //2. max 와 다르면 맨뒤로 이동 
                {
                    pair<int, int> temp = pairVector[0];
                    pairVector.erase(pairVector.begin()); // 0 번째 요소 삭제 
                    pairVector.emplace_back(temp);// 맨뒤에 추가 
                }
            }
        }
        // 다시 반복 조건 찾기 , !!! 근데 같은 우선순위라면 맨 왼쪽에 있는애 순서로 해야할텐데;  -> 어짜피 [0] 을 체크하는거라 상관 없는듯 
        maxPair = std::max_element(pairVector.begin(), pairVector.end()); // 다시 max 찾기

        if (maxPair == pairVector.end()) // 못찾았다면 이제 최대값(요소들) 없는거임
        {
            break; // 반복문 탈출
        }


        max = (*maxPair).first;
        for (const auto& p : pairVector)
        {
            if (max == p.first)
                ++maxCount;
        }
    }
}

int main(void)
{
    int answer1 = solution({ 2, 1, 3, 2 }, 2);
    int answer2 = solution({ 1, 1, 9, 1, 1, 1 }, 0);

}