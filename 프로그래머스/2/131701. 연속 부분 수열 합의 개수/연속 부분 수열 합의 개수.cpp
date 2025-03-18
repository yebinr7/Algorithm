#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> elements) 
{
    unordered_set<int> sumSet;

    // 선택하는 개수 1개씩 묶기 2개씩 묶기... Size()개씩 묶기
    const int N = elements.size();
    for (size_t i = 1; i <= elements.size(); ++i)
    {
        for (size_t j = 0; j < elements.size(); ++j)
        {
            // j는 인덱스 시작 인덱스 j부터 시작해서 i개씩 묶기 
            int sum = 0;
            for (size_t k = 0; k < i; ++k) // 0 부터 시작해서 i-1개까지 -> i개 의 합 
            {
                sum += elements[(j + k) % (N)]; // 인덱스 초과한거 처리 
            }
            sumSet.emplace(sum);
        }
    }
    int answer = sumSet.size();
    return answer;
}

int main(void)
{
    int answer1 = solution({7, 9, 1, 1, 4});
    return 0;
}