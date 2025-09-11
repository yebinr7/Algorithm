// 할인 행사
#include <string>
#include <vector>
#include <unordered_map> //; 조건에서 10만일이 최대.. 10만일이 며칠이야 ㅋㅋㅋ
#include <utility> //; pair사용하려면필요했었나?
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{

    unordered_map<string, int> wantNumMap;
    unordered_map<string, int> discountMap; 
    int answer = 0;
    
    // 초기화
    for (int i = 0; i < want.size(); ++i)
    {
        // 벡터 2개를 map 하나에 동시에 초기화
        wantNumMap.emplace(want[i], number[i]);  //; emplace 사용했기에 임시객체가 안생기고 바로 copy elision
    }

    ////; 매일 할인하는 품목 순서 상관없이 k-v 로 묶기 k:품목이름 v: 그 품목의 할인개수
    //for (string s : discount)
    //{
    //    ++discountMap[s]; //; 품목마다 할인 몇번하는지 짝 맞춰짐
    //}

    //; 10일간 할인하는거 미래시 ... 이걸 또 못봐서 잘못풀고 있었네 ㅡㅡ 

    for (int i = 0; i < discount.size(); ++i/*const string& s : discount*/)  //; 날마다 할인하는것 확인
    {
        // ;할인하는 맵 항상 초기화!!
        discountMap.clear();

        //; 10일동안.. 할인하는 품목 순서 상관없이 k-v 로 묶기 k:품목이름 v: 그 품목의 할인개수
        //for (int j=i; j<i+10;) //; i+10 하면 초과될수도 있따
        //{
        //    ++discountMap[discount[j]]; //; 품목마다 할인 몇번하는지 짝 맞춰짐
        //    ++j;
        //    if (j+10 > discount.size()) //;예외처리 
        //        break;
        //}
        int j = i;
        while (true)
        {
            /*if (j >= discount.size() || j > i + 10)
                break;*/

                // j 는 size()일보다 작아야한다. 
            if (j >= discount.size() || j > i + 9)
                break;

            ++discountMap[discount[j]];
            ++j;
        }

        bool bFound = false; //; 
        //; 날마다 원하는 요소 for 돌면서 개수 충족하는지 체크
        for (const pair<string, int> p : wantNumMap)
        {
            
            // 원하는 품목+개수 존재하는지 확인 
            //auto iter = discountMap.find(p.first) //; 그냥 키값으로 찾으면되잖아;
            
            if (discountMap[p.first] >= p.second) // 할인품목개수와 원하는품목 개수 있다면 통과 ..; == -> >=로 바꿨음! 할인품목이 더 많으면 ㄱㅊ 
            {
                bFound = true; // 통과
            }
            else // 다르면 다음 날짜로 넘어가기
            {
                bFound = false; //; 못찾았다.
                break;  //; 갑자기 헷갈리네.. break하면 이 반복문 바로나가나 아니면 밑에 코드 실행하면서 나가나...? 
            }

            //if (bFound == true)
            //{
            //    ++answer; // 회원가입!
            //}
            //else//(bFound == false)
            //{
            //    // ;다음날로 넘어가기전 할인목록에서 오늘 할인했던 할인 개수 줄이기!
            //    --discountMap[s];
            //    continue; // 못찾았으면 다음 할인날짜로 넘어가기 
            //}
        }
        if (bFound == true)
        {
            ++answer; // 회원가입!
        }
        //else//(bFound == false)
        //{
        //    // ;다음날로 넘어가기전 할인목록에서 오늘 할인했던 할인 개수 줄이기!
        //    --discountMap[discount[i]];
        //    continue; // 못찾았으면 다음 할인날짜로 넘어가기 
        //}

        //; 할인 날짜 끝나면 할인품목에서 개수 줄여야함!!!
    }


   
    return answer;
}

int main()
{
    int answer1 = solution({ "banana", "apple", "rice", "pork", "pot" },{ 3, 2, 2, 2, 1 },{ "chicken", "apple", "apple", "banana", "rice", "apple", "pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana" });
    int answer2 = solution({ "apple" },{ 10 },{ "banana", "banana", "banana", "banana", "banana", "banana", "banana", "banana", "banana", "banana" });

    return 0;
}