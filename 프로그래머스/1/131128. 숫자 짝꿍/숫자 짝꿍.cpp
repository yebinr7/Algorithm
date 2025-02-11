#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

string solution(string X, string Y) 
{
    //1. 짝궁이 존재 X => -1 리턴
    //2. 짝궁이 존재하는데 0만존재 => 0리턴
    //3. 짝궁이 존재 => 내림차순으로 리턴 

    //string이니깐 substr이용해보자


    //길이가 300만이라 시간초과 -> O(N) 불가 -> logN 이용해야함, logN자료구조 힙트리? 최대힙 
    //복사본 만들기 
   //string stringX = X;
   //string stringY = Y;
    string answer = "";
    //for (auto& c : X)//300만일수도..
    //{
    //    int idx = Y.find(c);
    //    if (idx!=string::npos/*Y.find(c) != string::npos*/)//여기서 문제인듯? O(N) 
    //    {
    //        //answer +=Y.substr(idx/*Y.find(c)*/, 1);//Y문자열은 찾은 
    //        //Y.erase(idx/*Y.find(c)*/,1); //찾은부분 지우기 -> 인자 하나넣으면? 

    //        ////해결책 erase isdom이용해서 공통된 애들 싹다지우기?. C++20에 추가 
    //        //answer += Y.substr(idx/*Y.find(c)*/, 1);//Y문자열은 찾은 
    //        //Y.erase(remove_if(Y.begin(), Y.end(), [&c](char para)
    //        //    {
    //        //        return para == c;
    //        //    }));
    //    }
    //}
    
    //1~9까지 배열을 만들고 
    //그 배열에 개수로 치기?
    
    //중복처리 set
    unordered_multiset<char> xSet(X.begin(), X.end());
    unordered_multiset<char> ySet(Y.begin(), Y.end());

    for (auto iter = xSet.begin(); iter != xSet.end(); iter++)
    {
        const char findC = *iter;
        if (ySet.find(findC) != ySet.end())
        {
            auto findIter = ySet.find(findC);
            ySet.erase(findIter);
            answer += findC;
        }
    }

    
    //내림차순!
    std::sort(answer.begin(), answer.end(), [](char left, char right) {return left > right;});
    if (answer == "")
    {
        //못찾은거
        answer = "-1";
    }
    else if (answer[0] == '0')//0으로만 이뤄져있다면..== 0으로 시작할 수 밖에 없음
    {
        answer.clear();
        answer = "0";
    }

    
    return answer;
}
