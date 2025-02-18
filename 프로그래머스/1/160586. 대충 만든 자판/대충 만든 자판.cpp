#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<string> keymap, vector<string> targets)
{
    // 1. 타겟을 for문 돌면서 받아온다.
        // 타겟스트링안의 문자 하나하나 키맵배열들에 존재하는지 체크하는것!
        // 근데 키맵스트링들이 여러개이고 배열에 존재함 
        // km.find(c)를 이용해서 인덱스 얻어올 수 있음 
        // 처음엔 최대값을 넣어놓고, 최소 인덱스로 갱신 min()이용? 

    vector<int> answer;

    for (const auto& targetString : targets) // 타겟에 있는 스트링 하나씩 받아옴
    {
        int accum = 0;
        //bool found = false; // 한번이라도 찾아쓴ㄴ지 

        // 문제는 타겟스트링을 키맵에 있는 문자들로 조합할 수 있는가가 중요한것
        bool canMake = false;

        for (const auto& c : targetString) //타겟 스트링 안에 있는 문자 하나 하나 받아옴
        {
            // 타겟 문자 하나당 키맵 모두 확인하면서 제일 작은 값으로 갱신해야함
            // 제일 작은 인덱스 
            int minIdx = 999;

            // keymap에 존재하는지 일단 체크 (키맵 배열)
            for (const auto& km : keymap) // 키맵 하나씩 받은 후
            {
                int findIdx = km.find(c);
                if (findIdx != string::npos) // 찾았다면?..
                {
                    // 찾은 인덱스 값 확인 
                    // 찾은애랑 이전에 저장해놓고 있던 minIdx랑 비교해서 더 작은애로 갱신 
                    minIdx = std::min(minIdx, findIdx);
                    canMake = true; // 타겟스트링의 문자 하나를 찾았다면 true로 
                }
     
            }

            if (minIdx == 999)
            {
                canMake = false;
                break;  // 못만드니깐 끝
            }
            else //
                accum += (minIdx + 1); // 단 실제로 인덱스에서 +1 해줘야 몇번 눌렀는지 됨 

            //순서 차이있나?
        }
        
        // 타겟스트링 0번에 있는 문자 모두 체크했음 

        if (canMake)
            answer.emplace_back(accum);
        else
            answer.emplace_back(-1);

    }
    return answer;
}


