#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;

    //일단 존재하지 않는지 확인  
    auto iter = find_if(arr.begin(), arr.end(),
        [=](int v)
        {
            return (v % divisor == 0);
            
        });
    if (iter == arr.end())
    {
        answer.emplace_back(-1);
        return answer;
    }
    else
    {
        for (auto v : arr)//컨테이너 값 뽑아와서 
        {
            //나눠진다면 answer에 넣기
            if (v % divisor == 0)
                answer.emplace_back(v);
        }
        //오름차순
        std::sort(answer.begin(), answer.end());
        return answer;
    }
}
