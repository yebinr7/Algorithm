#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) 
{
    /*n은 1이상 8`000`000`000 이하인 자연수입니다.:80억,10자리수*/
    //array<short> 스택에 올라가는 배열 스택에 올리면 스택에 만들어지고, 힙에 올리면 힙에 만들어짐 하지만 정적이다. 컴파일 시점에 만들어져야 하므로 크기 알려줘야함 
    vector<short> dynamicVec;
    long long q = n;
    short r = 0;
    while (true)
    {
        //탈출조건: 몫이 0이 됐을때, 나눠지지 않을때,
        if (q == 0)
            break;

        r = q % 10;
        dynamicVec.emplace_back(r);
        q /= 10;
    }
    std::sort(dynamicVec.begin(), dynamicVec.end(),std::greater<int>());//내림차순 정렬 


    long long answer = 0;
    for (size_t i = 0; i < dynamicVec.size(); i++)
    {
        answer = answer * 10 + dynamicVec[i];
    }

   
    return answer;
}