#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) 
{
    // 기본 벡터 -> 인덱스만 있다면 언제나 O(1)로 접근 가능하다.
    // 따라서 인덱스를 가진 Map을 만들면된다.

    unordered_map<string, int> stringRankingMap;


    int i = 0;
    for (const auto& player : players)
    {
        // index 가진 RankingMap 생성 <-> 벡터와 동기화 시켜줘야함
        stringRankingMap.emplace(player, i);
        ++i;
    }


    // calling 순서에 따라 players swap 하게..
    for (const auto& calling : callings) // 5만 
    {
        auto stringIter = stringRankingMap.find(calling);
        if (stringIter != stringRankingMap.end())
        {
            //if (stringIter != stringRankingMap.begin()) // 일등이 아니라면 어짜피 불릴일도 없긴하겠네..
            //{
                // 찾았으면 바꿔줘야함 
                // 1. stringRankingMap에서도 바꾸고 
                // 2. 그 바꾸고 난 후 벡터도 인덱스를 통해 접근해서 바꿔줘야함

                 // calling 된 현재 idx
                int foundIdx = (*stringIter).second;

                // 스트링 벡터에서 swap 사용하는법? 
                string temp = players[foundIdx - 1]; // 벡터에서 얻어온 왼편 string
                players[foundIdx - 1] = calling; // 벡터 왼편 calling으로 덮어쓰기
                players[foundIdx] = temp; // calling 위치에 temp 덮어쓰기 
            
                // 맵도 바꿔줘야한다.
                stringRankingMap[calling] = foundIdx - 1;
                stringRankingMap[temp] = foundIdx;
            //}
        }

    }

    vector<string> answer = players;
    return answer;
}

