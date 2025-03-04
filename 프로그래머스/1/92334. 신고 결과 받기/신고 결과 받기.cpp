#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) 
{
    // id_list: 존재하는 Id 들 문자열 배열
    // report: 각 이용자가 신고한 문자열 배열 report의 원소는 "이용자id 신고한id"형태의 문자열입니다.
    /* report:
       ["muzi frodo",
       "apeach frodo",
       "frodo neo",
       "muzi neo",
       "apeach muzi"]
       // 한 유저가 같은 유저 여러번 신고 가능하지만 신고카운팅은 1개다.
    */

    // 중복허용 x, k와 v 로 관리 
    // 신고한  횟수 카운팅 맵
    unordered_map<string, int> reportMap; // 신고하는 맵
    unordered_map<string, int> reportedMap; // 신고 당한 맵 

    // 아이디리스트 벡터 처음부터 끝까지 돌면서 Map에 순서대로 string과 reportCount 넣기 
    std::for_each(id_list.begin(), id_list.end(), [&](const string& id){
        reportMap.emplace(id, 0); // 처음엔 신고횟수 0번 
        });
    std::for_each(id_list.begin(), id_list.end(), [&](const string& id) {
        reportedMap.emplace(id, 0); // 처음엔 신고횟수 0번 
        });

    // 중복 신고 걸러내는 코드(표 만들어서 채울까?)
    // flag 만들어서 처리할까..
    const int listSize = id_list.size();
    vector<vector<bool>> checkDuplicates(id_list.size(), vector<bool>(id_list.size(), false)); // 다 false로 초기화 
    
    // 신고자 인덱스: id_list 돌면서 인덱스 설정
    
    
    // report 돌면서 중복신고 처리 및 reportMap에 신고 횟수 관리(k번이상이면 신고한 유저에게 숫자 카운팅)
    // 리스트의 첫번째 요소 이름 어떻게 얻을지.. -> 공백 만날때까지 반복후 공백만나면 이름 얻기 
    for (const auto& id : report)
    {
        ostringstream ossFrom;
        string fromId = "";
        ostringstream ossTo;
        string toId = "";

        bool bGetFrom = false;

        // 신고ID, 신고당하는ID 
        for (int i = 0; i<id.size(); ++i)
        {
            // 신고 당하는 아이디 얻기
            if (bGetFrom)
            {
                ossTo << id[i];
                // size()전까지 , 끝까지 얻기 
                if (i == id.size() - 1)
                {
                    // 마지막 인덱스 값이였다면..
                    toId = ossTo.str();
                }
            }




            ossFrom << id[i];            
            // 신고하는 아이디 얻기
            if (id[i] == ' ')
            {
                fromId = ossFrom.str(); // 신고하는id 얻기
                // ' ' 는 삭제
                fromId = fromId.substr(0, fromId.size() - 1);

                bGetFrom = true;
            }
        }

        // 신고 하는 ID , 신고 당하는 ID 얻었으니...
        // checkDuplicates 에서 이미 같은애 신고한 적있는지 확인    
        // 신고하는 ID의 인덱스 얻기(행), 신고당하는 ID의 인덱스얻기(열)
        auto fromIter = find(id_list.begin(), id_list.end(), fromId);
        int fromIdx = distance(id_list.begin(), fromIter);      // 인덱스 얻는법 distance 이용

        auto toIter = find(id_list.begin(), id_list.end(), toId);
        int toIdx = distance(id_list.begin(), toIter);

        // checkDuplicates 행열에서 true 인지 체크
        if (checkDuplicates[fromIdx][toIdx] == true)
        {
            // 이미 체크 되어 있던 것이므로 continue;
            continue;
        }
        else
        {
            // 처음이므로  fromIdx에서 toIdx 신고했다.
            checkDuplicates[fromIdx][toIdx] = true; // 체크됐다고 바꿔주고..
            //       무지 프로도 어피치 네오
            // 무지
            // 프로도
            // 어피치
            // 네오  

            // 맵에서 신고횟수 카운팅
            
            reportedMap[toId]++;
        }

    }
    
    
    vector<int> answer(id_list.size(),0); // 각 유저마다 정지확인완료메일 개수(지가 신고한 유저수 이하)

    // 결국 맵에는 신고한 맵과 신고당한 맵이 있는데..
    // 신고 당한 맵의 요소가 k보다 크다면.. 신고한 Id에게 알려줘야함 
    // 반복문 돌면서 id_list의 반복문으로..
    for (int i=0; i<id_list.size(); ++i)
    {
        if (reportedMap[id_list[i]] >= k) // k번 이상 신고됐다면...
        {
            
           // k번 이상 신고된 ID 를 신고한 ID를 추적해야함
           // i == 신고된 인덱스 
            for (int j = 0; j < id_list.size(); ++j)
            {
                if (checkDuplicates[j][i])
                {
                    ++answer[j];
                }
            }
        }
    }


    return answer;
}

int main(void)
{
    vector<int> answer1 = solution({ "muzi", "frodo", "apeach", "neo" },
        { "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi" },
        2);

    vector<int> answer2 = solution({ "con", "ryan" },
        { "ryan con", "ryan con", "ryan con", "ryan con" },
        3);
    return 0;
}