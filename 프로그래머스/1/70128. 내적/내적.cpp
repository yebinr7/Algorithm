#include <string>
#include <vector>

using namespace std;


int solution(vector<int> a, vector<int> b) 
{
    //길이가 같은 2개의 벡터 size()동일 
    //내적은 인덱스 끼리 곱들의 합 
    int answer = 0;
    for (size_t i = 0; i < a.size(); i++)
    {
        answer = answer + (a[i] * b[i]);
    }
    return answer;
}
