#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> solution(int n, vector<string> words) 
{
    vector<int> answer;

    // n 인원수 
    // 중복 거르는 map ;or set으로 그냥 존재여부만 따져도 될거같은데
    unordered_set<string> dupCheckSet;
   
    int r = 1; // 1라운드부터 시작 -> 마지막 라운드 N 

    while (true)
    {
        for (int i = 0; i < words.size(); ++i/*++r*/) //;라운드도 여기서 같이 증가 -> 이렇게 하면안됨 
        {
            // i+1 가 실제적인 번호

            //char lastC = ' '; //; 쓰레기값 없게 초기화, 굳이 백업안해도 Set에서 그냥 받아오기? &로 

            //; 라운드 처리!!
            r = (i / n) + 1; // +1 처리

            // 처음꺼 예외
            if (i == 0)
            {
                dupCheckSet.emplace(words[i]);
            }
            else // 
            {
                const string& last = words[i - 1];
                int lastLength = last.size();

                const string& now = words[i];
                //;words[i][0] 이런식으로도 되는거임?
                if (last[lastLength - 1] != now[0]) // 다른 문자면 -> 바로 탈락
                {
                    // 현재 탈락번호, 라운드 넣어서 반환 
                    answer.emplace_back((i % n) + 1); //; n으로 나눠야 사람의 번호가 나옴..  //; 최종수정 코드 /*(i + 1)/n*//*(i / n) + 1*   /(i%n)+1
                    answer.emplace_back(r);
                    return answer;
                }
                else // 같은 문자면
                {
                    // 1. 문자열 중복 체크
                    if (dupCheckSet.find(now) != dupCheckSet.end())
                    {
                        // 중복됐다면..(Set에 존재한다면)
                        // 현재 탈락번호, 라운드 넣어서 반환
                        answer.emplace_back((i % n) + 1);
                        answer.emplace_back(r);
                        return answer;
                    }
                    else
                    {
                        // 중복도 아니고 
                        dupCheckSet.emplace(words[i]);
                    }
                }
            }

            

        }
       
        // 끝까지 끝말잇기 가능했다
        return { 0,0 }; // ;rvo 적용되는건가?
    }

    //return answer;
}

int main()
{
    vector<int> answer1 = solution(3, { "tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank" });
    vector<int> answer2 = solution(5, { "hello", "observe", "effect", "take", "either", "recognize", "encourage", "ensure", "establish", "hang", "gather", "refer", "reference", "estimate", "executive" });
    vector<int> answer3 = solution(2, { "hello", "one", "even", "never", "now", "world", "draw" });
    return 0;
}