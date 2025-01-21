#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) 
{
    //벡터 받아서 숫자들 중에서 3개 합쳐서 0이 되는 경우의 수 모두 구하기 
    //0 1 2 3 4 5
    //(0 1 2) (0 1 3) (0 1 4) (0 1 5)
    //(1 2 3) (1 2 4) (1 2 5)
    //(2 3 4) (2 3 5)
    //(3 4 5)
    //col 증가할 때 하나씩 줄어듬 
    size_t size = number.size();
    int sum = 0;
    int answer = 0;
    for (size_t i = 0; i < size ; i++)
    {
        for (size_t j = i+1; j < size; j++)
        {
            //O(n^2) 제한: 5000정도?
            for (size_t k = j+1;  k < size;  k++)
            {
                sum = number[i] + number[j] + number[k];
                if (sum == 0)
                    answer += 1;
            }
        }
    }
    return answer;
}