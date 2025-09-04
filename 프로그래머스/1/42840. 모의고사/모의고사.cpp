// 9.4 모의고사
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int VectorA(int i)
{
    if (i % 5 == 0)
    {
        return 1;
    }
    else if(i % 5 == 1)
    {
        return 2;
    }
    else if (i % 5 == 2)
    {
        return 3;
    }
    else if (i % 5 == 3)
    {
        return 4;
    }
    else if (i % 5 == 4)
    {
        return 5;
    }
}

int VectorB(int i)
{
    if (i % 8 == 0)
    {
        return 2;
    }
    else if (i % 8 == 1)
    {
        return 1;
    }
    else if (i % 8 == 2)
    {
        return 2;
    }
    else if (i % 8 == 3)
    {
        return 3;
    }
    else if (i % 8 == 4)
    {
        return 2;
    }
    else if (i % 8 == 5)
    {
        return 4;
    }
    else if (i % 8 == 6)
    {
        return 2;
    }
    else if (i % 8 == 7)
    {
        return 5;
    }
}

int VectorC(int i)
{
    if (i % 10 == 0)
    {
        return 3;
    }
    else if (i % 10 == 1)
    {
        return 3;
    }
    else if (i % 10 == 2)
    {
        return 1;
    }
    else if (i % 10 == 3)
    {
        return 1;
    }
    else if (i % 10 == 4)
    {
        return 2;
    }
    else if (i % 10 == 5)
    {
        return 2;
    }
    else if (i % 10 == 6)
    {
        return 4;
    }
    else if (i % 10 == 7)
    {
        return 4;
    }
    else if (i % 10 == 8)
    {
        return 5;
    }
    else if (i % 10 == 9)
    {
        return 5;
    }
}

vector<int> solution(vector<int> answers) 
{
    // answer의 사이즈에 따른 a b c 벡터 런타임에 만들기
    vector<int> a;
    vector<int> b;
    vector<int> c;

    int scoreA = 0;
    int scoreB = 0; 
    int scoreC = 0;

    for (int i = 0; i < answers.size(); ++i)
    {
        //// a, b, c 런타임에 answer 크기와 맞는 벡터 초기화 ->; 근데 미리 크기 size()만큼 capacity 늘려놓는게 비용 좋지 않으려나..
        //a.emplace_back(VectorA(i));
        //a.emplace_back(VectorB(i));
        //a.emplace_back(VectorC(i)); 

        // 애초에 정답만 개수 세면되니깐.. 값 확인하면서 맞으면 점수 쌓기
        if (VectorA(i) == answers[i])
            scoreA++;
        if (VectorB(i) == answers[i])
            scoreB++;
        if (VectorC(i) == answers[i])
            scoreC++;
    }

    // 7가지 경우에 맞게 리턴? 
    
    // 점수가 모두 동일하다면?
    if (scoreA == scoreB && scoreB == scoreC)
        return vector<int>{1, 2, 3}; //R밸류 벡터 오름차순

    // 점수가 A B가 같고 C보다 큰경우
    if (scoreA == scoreB && scoreB > scoreC)
        return vector<int>{1, 2};

    // 점수가 A C가 같고 B보다 큰 경우 
    if (scoreA == scoreC && scoreC > scoreB)
        return vector<int>{1, 3};

    // 점수가 B C가 같고 A보다 큰 경우 
    if (scoreB == scoreC && scoreC > scoreA)
        return vector<int>{2, 3};

    //// 각각이 제일 큰 경우
    //if (std::max(scoreA, scoreB, scoreC) == scoreA)
    //    return vector<int>{1};
    //// 각각이 제일 큰 경우
    //if (max(scoreA, scoreB, scoreC) == scoreB)
    //    return vector<int>{2};
    //// 각각이 제일 큰 경우
    //if (max(scoreA, scoreB, scoreC) == scoreC)
    //    return vector<int>{3};

    // 각각이 제일 큰 경우
    if (std::max(scoreB, scoreC) < scoreA)
        return vector<int>{1};
    // 각각이 제일 큰 경우
    if (max(scoreA, scoreC) < scoreB)
        return vector<int>{2};
    // 각각이 제일 큰 경우
    if (max(scoreA, scoreB) < scoreC)
        return vector<int>{3};
}




int main(void)
{
    vector<int> answer1 = solution({ 1,2,3,4,5 });
    vector<int> answer2 = solution({ 1,3,2,4,2 });
    return 0;
}
