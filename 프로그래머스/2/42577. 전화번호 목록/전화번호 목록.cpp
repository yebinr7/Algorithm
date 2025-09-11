#include <string>
#include <vector>
#include <unordered_set>
#include <set> //->  (logN)
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) 
{
    //unordered_set<string> pbSet(phone_book.begin(); phone_book.end()); //; 이런초기화 방식 알려줘
    //unordered_set<string> pbSet;
    //for (auto s : phone_book)
    //{
    //    pbSet.emplace(s); // 모든 요소 복사해서 set에 넣기
    //}

    //for (auto s : phone_book)
    //{
    //    // 자기 자신을 제외하고 set 안에서 접두어 가졌는지  판단
    //    //
    //}
    //;unordered 사용 X -> 정렬안되어있음
    //;set -> logN 차라리 벡터를 사전순으로 정렬(string) nlogN 엇... 이러면 별론데 근데 한번만 정렬하고 그다음부터는 set보다 좋을듯? 인덱스접근이니깐, set은 bst니깐 탐색도 logN 매번. 결국 똑같나?ㅋㅋ
    
    sort(phone_book.begin(),phone_book.end()); // string은 기본적으로 사전순으로 sort됨 


    // 문자열 가
    bool isDif = false;
    for (int i = 0; i < phone_book.size(); ++i)
    {
        //; 사전순으로 정렬되었기 때문에 다음 인덱스에 현재 문자열 포함하고 있는지 확인하면됨


        //; 예외처리 마지막 문자열까지 왔는데도 같은게 존재하지 않았다-> true 리턴
        if (i == phone_book.size() - 1)
            return true; 

        // 현재 문자열
        const string& nowStr = phone_book[i];
        // 다음 문자열
        const string& nextStr = phone_book[i + 1];

        
        for (int j = 0; j < nowStr.size(); ++j)
        {
            
            if (nowStr[j] != nextStr[j])
            {
                isDif = true; //다르다 켜주고
                break; // 다음 문자열로 넘기기 ;;-> 바깥for문으로 보내줘야하는데..
            }
            else //문자열 같다.
            {
                isDif = false; //같은문자다.
            }
        }
        if (isDif) //;다르면 계속 확인해야함
            continue; //; 이런스킬?..
        // for문 지나왔다는 것은 접두문자가 같다.
        return false;
    }
    
}

int main()
{
    bool answer1 = solution({ "119", "97674223", "1195524421" }); //-> false
    bool answer2 = solution({ "123","456","789" }); //->true
    bool answer3 = solution({ "12","123","1235","567","88" });
}