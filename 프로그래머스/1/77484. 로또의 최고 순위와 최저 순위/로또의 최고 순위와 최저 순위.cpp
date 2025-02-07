#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    //1번~45번 
    //6개 찍어서 맞추는 것 
    //최고순위, 최저순위 알아보기 

    //6개 번호
    //당첨번호 6개 
    //배열 순서 상관없다. 맞는 번호만 있으면됨

    //최고 몇등 최저몇등-> 
    //2중for문이용
    int correctNum = 0;
    int zeroNum = 0;
    for (const auto& myNum : lottos)
    {
        if (win_nums.end() != find(win_nums.begin(), win_nums.end(), myNum))
        {
            //찾았다면
            correctNum++;
        }
        if (myNum == 0) //지워진 번호개수 
            zeroNum++;
    }
    
    //최고등수 맞춘번호 + 지워진번호 개수 최대값
    int max = correctNum + zeroNum;
    //최소등수 지워진번호 다틀림
    int min = correctNum;

    vector<int> answer;
    switch (max)
    {
    case 6:
        answer.emplace_back(1);
        break;
    case 5:
        answer.emplace_back(2);
        break;
    case 4:
        answer.emplace_back(3);
        break;
    case 3:
        answer.emplace_back(4);
        break;
    case 2:
        answer.emplace_back(5);
        break;
    default:
        answer.emplace_back(6);
        break;
    }

    switch (min)
    {
    case 6:
        answer.emplace_back(1);
        break;
    case 5:
        answer.emplace_back(2);
        break;
    case 4:
        answer.emplace_back(3);
        break;
    case 3:
        answer.emplace_back(4);
        break;
    case 2:
        answer.emplace_back(5);
        break;
    default:
        answer.emplace_back(6);
        break;
    }

    return answer;
}


using namespace std;


int main(void)
{
    auto vec1 = solution({44, 1, 0, 0, 31, 25},{31, 10, 45, 1, 6, 19});
    auto vec2 = solution({ 0, 0, 0, 0, 0, 0 }, { 38, 19, 20, 40, 15, 25 });
    auto vec3 = solution({45, 4, 35, 20, 3, 9},{20, 9, 3, 45, 4, 35});
    return 0;
}
