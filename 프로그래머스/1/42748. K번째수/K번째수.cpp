#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    //1. array 커맨드에 맞춰서 자르고 숫자얻기
    vector<int> answer;
    vector<int> temp;
    for(auto command : commands)
    {
        
        int aIdx = command[0]-1;
        int bIdx = command[1];
        int cIdx = command[2]-1;
        for(size_t i= aIdx; i<bIdx; ++i)
            temp.emplace_back(array[i]);
        
        std::sort(temp.begin(), temp.end());
        answer.emplace_back(temp[cIdx]);
        temp.clear();
    }
    return answer;
}