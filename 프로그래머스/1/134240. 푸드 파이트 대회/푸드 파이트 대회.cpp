#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

string solution(vector<int> food)
{
    //[0] [1] [2] [3] [4]...[9]
    //물  개수
    string answer = "";
    string first = "";
    string second = "";
    ostringstream oss;
    for (size_t i = 1; i < food.size(); i++)
    {
        for (size_t j = 0; j < food[i] / 2; j++)
        {
            oss << i;
        }
    }
    //처음 문자열 저장
    first = oss.str();
    
    //oss 초기화 clear로 불가..
    oss.str("");
    oss.clear();
    
    //뒤집어서 넣기
    for (auto iter = first.rbegin(); iter != first.rend(); ++iter)
        oss << *iter;
    
    //두번째 문자열 저장
    second = oss.str();

    //가운데 물넣기
    oss << '0';

    answer = first + '0' + second;

    //대칭적으로 넣기
    
    return answer;
}