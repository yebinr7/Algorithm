#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) 
{
    //순회하며 합더하기
    int sum = 0;
    for (auto n : arr)
        sum += n;

  
    //int를 double에 넣어도 된다. 유효숫자 int: 10 double: 15이기 때문
    double answer = static_cast<double>(sum) / arr.size();
    return answer;
}