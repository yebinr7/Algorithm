#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;


vector<int> solution(string s)
{
    vector<int> answer;
    //b a n a n a
    //0 1 2 3 4 5 
    //0이라면 처음, -1이라면 있던 pair 벡터 이용?
    //std::vector<std::pair<int, int>> alphabetVec(26,{0,0});//26개 방
    std::vector<int> alphabet(26, -1); //a -> idx: 0, z -> idx: 25 
    for (size_t i = 0; i < s.length(); i++)
    {
        //처음 나온 알파벳이면 -1기입하고, 현재 i 기록
        int alphaIdx = s[i] - 'a';//모두 소문자라 가능 
        if (alphabet[alphaIdx] == -1)
        {
            answer.emplace_back(-1);
            alphabet[alphaIdx] = i;//현재 나온 idx 그 위치에 기입
        }
        else //-1이아닌 수가 적혀있다? 이미 나왔던 수..
        {
            //-1아니라면 존재했던거니깐 이전 기록과 현재 기록 차 구해서 저장
            //현재 idx = i와 이전에 기록된 idx 차
            answer.emplace_back(i - alphabet[alphaIdx]);
            alphabet[alphaIdx] = i;//현재 나온 idx 그 위치에 기입
        }
    }
    return answer;
}
