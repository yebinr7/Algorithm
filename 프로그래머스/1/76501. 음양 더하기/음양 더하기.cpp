#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs)
{
    //양수 벡터 배열
    //bool 배열
    //서로 곱해서 sum
    int sum =0;
    
    for(size_t i=0; i<absolutes.size(); i++)
    {
        if(signs[i]==false)
        {
            sum = sum +(-1*absolutes[i]);
        }
        else
        {
            sum = sum + absolutes[i];

        }
    }
    return sum;
}