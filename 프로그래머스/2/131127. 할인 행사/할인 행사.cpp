#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;

    // 맵에 옮기기 -> 맵 한번에 초기화 하는 법 있나?
    unordered_map<string, int> map;

    for (size_t i = 0; i<want.size(); ++i)
    {
        map.emplace(want[i], number[i]); // pair 로 초기화 됨
    }


    // discount [0] 부터 10개씩 돌기 

    for (size_t i = 0; i <= discount.size() - 10; ++i) // 10개전까지만!! 마지막 10일 처리해주기
    {
        // 맵 복사해오기
        unordered_map<string, int> dupMap = map; 
        bool flag = false;
        for (size_t j = i; j < i  + 10; ++j) // 10개 돌아가면서 체크 
        {
            auto iter = dupMap.find(discount[j]);
            if (iter != dupMap.end()) // 찾았다면
            {
                // 요소 하나 삭제하기
                --dupMap[discount[j]]; // 음수값 나올 수 없다. 위에서 찾았다면 최소 1개 존재했다는 뜻
               
                if (dupMap[discount[j]] < 0) // 음수값 나오면 예외처리 
                {
                   
                    break;
                }
            }
            else
            {
                // 못찾았으면 끝
                break;
            }
        }

        
        // dupMap의 요소가 모두 0이라면?..
        for (auto iter = dupMap.begin(); iter != dupMap.end(); ++iter)
        {
            if ((*iter).second > 0) // 0보다 크면 안됨 
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            ++answer; 
        //if (dupMap.empty()) // 모두 지워졌다면 만족하는 것
        //    ++answer;
    }

    return answer;
}

int main(void)
{
    int answer1 = solution(
        { "banana", "apple", "rice", "pork", "pot" },
        { 3, 2, 2, 2, 1 },
        { "chicken", "apple", "apple", "banana", "rice", "apple", "pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana" });

    int answer2 = solution(
        { "apple" },
        { 10 },
        { "banana", "banana", "banana", "banana", "banana", "banana", "banana", "banana", "banana", "banana" });

    return 0;
}