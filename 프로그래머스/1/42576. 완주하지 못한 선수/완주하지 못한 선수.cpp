// 완주하지 못한 선수
#include <string>
#include <vector>
#include <unordered_set> // 
#include <unordered_map>
#include <utility>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) 
{
    //unordered_multiset<string> participantSet;
    //for (auto s : std::move(participant))
    //{
    //    participantSet.emplace(s); //; R밸류 된거 가져와지는건가 이렇게쓰면..
    //}

    //for (const auto& s : completion) // ;O(N)
    //{
    //    auto findIter = participantSet.find(s); // ;O(1)

    //    if (findIter != participantSet.end()) 
    //    {
    //        // 찾았으면 지워주기 
    //        //; 디버깅중 발견!!! 같은 값 erase하면 둘다사라지네??? 어떻게해야하지 -> 이러면 map으로 bool 체크했어야하나 ㅠㅠ 왜 한번에 다사라지게 만들었지; 
    //        participantSet.erase(*findIter);// ;찾은 이터에 맞는 값을 넣어서 지우기 O(1)

    //       
    //    }
    //}

    //// 마지막으로 남은 participantSet의 요소
    //
    //
    //return (*participantSet.begin());

    //unordered_multimap<string, bool> participantMap;

    //for (auto s : std::move(participant))
    //{
    //    participantMap.emplace(s,false); //; R밸류 된거 가져와지는건가 이렇게쓰면..
    //}

    //for (const auto& s : completion) // ;O(N)
    //{
    //    auto findIter = participantMap.find(s); // ;O(1) //; 이 코드가 문제같음 왜냐면 중복해서 계속 찾을수도 있을거같음, 근데 비용이 O(1)이긴해서;;

    //    if (findIter != participantMap.end() && (*findIter).second != true)
    //    {
    //        // 지우는 대신 bool 켜기(켜졌으면 지워진것으로 취급)
    //        (*findIter).second = true;
    //    }
    //}

    //string answer;
    //// false 인거 찾기 find_if 이용? or 그냥 반복문
    //for (const auto& p : participantMap)
    //{
    //    if (p.second == false)
    //        return p.first;
    //}


    // 사람이름이 k  ,  v: 그 사람이 몇명 참가했는지.. 
    unordered_map<string,int>pMap;

    for (string s : std::move(participant)) //; 이거 move 적용되는거임???
    {
        ++(pMap[s]); //; map이 좋은게 그 string의 키에 대한 게 없으면 만들어지고0으로초기화되고 ++ 에 인해서 +1이됨..
    }

    // 완주자 목록은 k에 맞게 삭제
    for (const auto& s : completion) // ;O(N)
    {
        --pMap[s];
    }

    // 1이 남아있는 애 반환하기 

    auto iter = std::find_if(pMap.begin(), pMap.end(), [](const std::pair<string,int>& p)
        {
            return p.second == 1; //1인애 찾아서 반환 
        });
    return (*iter).first;
}

int main(void)
{
    string answer1 = solution({ "leo", "kiki", "eden" }, { "eden", "kiki" });
    string answer2 = solution({ "marina", "josipa", "nikola", "vinko", "filipa" }, { "josipa", "filipa", "marina", "nikola" });
    string answer3 = solution({ "mislav", "stanko", "mislav", "ana" },{ "stanko", "ana", "mislav" });

    return 0;
}