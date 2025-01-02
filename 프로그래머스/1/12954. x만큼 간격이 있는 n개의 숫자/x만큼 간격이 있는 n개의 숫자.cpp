#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    
    // n 개의 배열 
    // n 번 반복
    // 
    vector<long long> vec;

    for (size_t i = 1; i <= n; i++)
    {
        vec.emplace_back(x * i);
    }

    
    return vec;
}