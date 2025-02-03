#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <utility>
using namespace std;

vector<int> solution(vector<int> answers)
{
    // 1, 2, 3, 4, 5,     1, 2, 3, 4, 5...
    // 2, 1, 2, 3, 2, 4, 2, 5,    2, 1, 2, 3, 2, 4, 2, 5 ...
    // 3, 3, 1, 1, 2, 2, 4, 4, 5, 5,       3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 

    // 정답배열 반복됨 몇개인지 모름? 
    // 최대 1만.. O(N) 1000만 이라 가능 



    vector<int> tenThousandProb;
    vector<int> aPattern{ 1, 2, 3, 4, 5 };
    vector<int> bPattern{ 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> cPattern{ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    vector<int> aAnswer;
    vector<int> bAnswer;
    vector<int> cAnswer;


    int aScore = 0;
    int bScore = 0;
    int cScore = 0;

    //1만개 정답지 초기화
    for (size_t i = 0; i < 10'000; i++)
    {
        if (aAnswer.size() >= 10000)
            break;

        i %= 5; //0~6인덱스이고.. 7됐을때 다시 0으로 돌아가게 
        aAnswer.emplace_back(aPattern[i]);
    }
    //1만개 정답지 초기화
    for (size_t i = 0; i < 10'000; i++)
    {
        if (bAnswer.size() >= 10000)
            break;
        i %= 8; //0~6인덱스이고.. 7됐을때 다시 0으로 돌아가게 
        bAnswer.emplace_back(bPattern[i]);
    }
    //1만개 정답지 초기화
    for (size_t i = 0; i < 10'000; i++)
    {
        if (cAnswer.size() >= 10000)
            break;
        i %= 10; //0~6인덱스이고.. 7됐을때 다시 0으로 돌아가게 
        cAnswer.emplace_back(cPattern[i]);
    }

    for (size_t i = 0; i < answers.size(); i++)
    {
        if (aAnswer[i] == answers[i])
            aScore++;
        if (bAnswer[i] == answers[i])
            bScore++;
        if (cAnswer[i] == answers[i])
            cScore++;
    }
    //multimap<int,int> scoreMap{ {aScore,1},{bScore,2},{cScore,3}};
    ////점수 중복허용
    vector<int> answer;

    vector<pair<int, int>>scoreVec{{aScore,1},{bScore,2},{cScore,3} };
    std::sort(scoreVec.begin(), scoreVec.end(), [](pair<int, int> left, pair<int, int> right)
        {
            return left.first < right.first; //오름차순
        });

    //abc 값 같은경우 ->최대

    if (scoreVec[0].first == scoreVec[1].first &&
        scoreVec[1].first == scoreVec[2].first)
    {
        answer.emplace_back(scoreVec[0].second);
        answer.emplace_back(scoreVec[1].second);
        answer.emplace_back(scoreVec[2].second);
    }
    //a b c 값 모두 다른 경우 
    else if (scoreVec[0].first != scoreVec[1].first &&
        scoreVec[1].first != scoreVec[2].first)
    {
        answer.emplace_back(scoreVec[2].second);//오름차순이니깐 맨 오른쪽이 최대값 
    }
    //오름차순 0 1 2, 1,2는같고 0은 다른경우 
    else if (scoreVec[0].first != scoreVec[1].first &&
        scoreVec[1].first == scoreVec[2].first)
    {
        answer.emplace_back(scoreVec[1].second);
        answer.emplace_back(scoreVec[2].second);
    }
    //0,1은 같고 2는 다른경우 
    else if (scoreVec[0].first == scoreVec[1].first &&
        scoreVec[1].first != scoreVec[2].first)
    {
        answer.emplace_back(scoreVec[2].second);
    }

  
    //중복허용 맵 
    
    


    //std::sort(scoreSumVec.begin(), scoreSumVec.end(), [](pair<int, int> left, pair<int, int> right)
    //    {
    //        return left.second < right.second; //오름차순
    //    });

    //최대힙에 넣어서.. 최대값 pop해서 넣고 만약 또 pop 했는데 같다면 넣고 안같다면 안넣고

    //제일 많이 맞춘애 1명이면 1 벡터 반환 2명이면 2
   

    //오름차순 필요
    std::sort(answer.begin(), answer.end());
    return answer;
}