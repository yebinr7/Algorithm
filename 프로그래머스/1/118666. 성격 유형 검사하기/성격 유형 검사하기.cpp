#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
using namespace std;

int GRScore = 0;
int GTScore = 0;

int GCScore = 0;
int GFScore = 0;

int GJScore = 0;
int GMScore = 0;

int GAScore = 0;
int GNScore = 0;



// 1 -> A 3점
// 2 -> A 2점
// 3 -> A 1점
// 4 -> 0
// 5 -> B 1점
// 6 -> B 2점
// 7 -> B 3점 

int Converter(int score)
{
    switch (score)
    {
    case 1: return 3;
    case 2: return 2;
    case 3: return 1;
    case 4: return 0;
    case 5: return 1;
    case 6: return 2;
    case 7: return 3;
    default: break;
    }
}

void GetChar(const pair<string, int>& pair)
{
    int score = pair.second;

    // 점수 계산 -> 전역으로 관리 
    if (pair.first[0] == 'R') //"RT"
    {
        if (score <= 4)
            GRScore += Converter(score);
        else
            GTScore += Converter(score);

    }
    else if (pair.first[0] == 'T'/*"TR"*/)
    {
        if (score <= 4)
            GTScore += Converter(score);
        else
            GRScore += Converter(score);
    }
    else if (pair.first[0] == 'C'/*"CF"*/)
    {
        if (score <= 4)
            GCScore += Converter(score);
        else
            GFScore += Converter(score);
    }
    else if (pair.first[0] == 'F'/*"FC"*/)
    {
        if (score <= 4)
            GFScore += Converter(score);
        else
            GCScore += Converter(score);
    }
    else if (pair.first[0] == 'J'/*"JM"*/)
    {
        if (score <= 4)
            GJScore += Converter(score);
        else
            GMScore += Converter(score);
    }
    else if (pair.first[0] == 'M'/*"MJ"*/)
    {
        if (score <= 4)
            GMScore += Converter(score);
        else
            GJScore += Converter(score);
    }
    else if (pair.first[0] == 'A'/*"AN"*/)
    {
        if (score <= 4)
            GAScore += Converter(score);
        else
            GNScore += Converter(score);
    }
    else if (pair.first[0] == 'N'/*"NA"*/)
    {
        if (score <= 4)
            GNScore += Converter(score);
        else
            GAScore += Converter(score);
    }
}


string solution(vector<string> survey, vector<int> choices) 
{
    // 문제 개수 1000개 
    // R, T 중 택1
    // C, F 중 
    // J, M
    // A, N 


    // 1. 반복문으로 k-v 를 만든다. 순서는 상관없나? -> 중복 unordered_map 
    // 2. k에 맞아서 점수를 계산한다.
        // - k가 RT인 경우 하나씩 불러와서 점수 계산하고 R점수 T점수에 기입
        // - k가 TR인 경우 하나씩 불러와서 점수 계산 
        // - k가 CF
        // ...
        
    // 3. 각 키들마다 점수가 모두 계산 됐으면 각 유형마다 점수 높은걸로 선택해서 string에 추가
        // 각 유형의 점수가 같다면 사전순서별로 선택해서 string에 기입 

    const size_t n = survey.size(); // 문제의 총개수 
    unordered_multimap<string, int> multiMap;
    for (size_t i =0; i < n; i++)
    {
        multiMap.emplace(survey[i], choices[i]); //ex) RT,3점:R->3 
    }

    // RT, TR, CF, FC ... 순서로 돌면서 점수 함수 통해서 판별해서 얻어오기
    
    // 키가 RT가 남아있다면 반복 
    while (multiMap.find("RT") != multiMap.end())
    {
        auto iter = multiMap.find("RT"); // RT pair 얻어와서
        GetChar(*iter); // 함수에 넣어서 계산(전역으로 성격점수관리)
        multiMap.erase(iter); // 계산했으면 지워버리기 
    }
    while (multiMap.find("TR") != multiMap.end())
    {
        auto iter = multiMap.find("TR"); // RT pair 얻어와서
        GetChar(*iter); // 함수에 넣어서 계산(전역으로 성격점수관리)
        multiMap.erase(iter); // 계산했으면 지워버리기 
    }


    while (multiMap.find("CF") != multiMap.end())
    {
        auto iter = multiMap.find("CF"); // RT pair 얻어와서
        GetChar(*iter); // 함수에 넣어서 계산(전역으로 성격점수관리)
        multiMap.erase(iter); // 계산했으면 지워버리기 
    }
    while (multiMap.find("FC") != multiMap.end())
    {
        auto iter = multiMap.find("FC"); // RT pair 얻어와서
        GetChar(*iter); // 함수에 넣어서 계산(전역으로 성격점수관리)
        multiMap.erase(iter); // 계산했으면 지워버리기 
    }


    while (multiMap.find("JM") != multiMap.end())
    {
        auto iter = multiMap.find("JM"); // RT pair 얻어와서
        GetChar(*iter); // 함수에 넣어서 계산(전역으로 성격점수관리)
        multiMap.erase(iter); // 계산했으면 지워버리기 
    }
    while (multiMap.find("MJ") != multiMap.end())
    {
        auto iter = multiMap.find("MJ"); // RT pair 얻어와서
        GetChar(*iter); // 함수에 넣어서 계산(전역으로 성격점수관리)
        multiMap.erase(iter); // 계산했으면 지워버리기 
    }


    while (multiMap.find("AN") != multiMap.end())
    {
        auto iter = multiMap.find("AN"); // RT pair 얻어와서
        GetChar(*iter); // 함수에 넣어서 계산(전역으로 성격점수관리)
        multiMap.erase(iter); // 계산했으면 지워버리기 
    }
    while (multiMap.find("NA") != multiMap.end())
    {
        auto iter = multiMap.find("NA"); // RT pair 얻어와서
        GetChar(*iter); // 함수에 넣어서 계산(전역으로 성격점수관리)
        multiMap.erase(iter); // 계산했으면 지워버리기 
    }


    // 점수 판별
    string answer = "";
    if (GRScore >= GTScore)
        answer += "R";
    else
        answer += "T";

    if (GCScore >= GFScore)
        answer += "C";
    else
        answer += "F";

    if (GJScore >= GMScore)
        answer += "J";
    else
        answer += "M";

    if (GAScore >= GNScore)
        answer += "A";
    else
        answer += "N";

    return answer;
}


int main(void)
{
    //string answer1 = solution({ "AN", "CF", "MJ", "RT", "NA" }, { 5, 3, 2, 7, 5 });
    string answer2 = solution({ "TR", "RT", "TR" }, { 7, 1, 3 });
    return 0;
}