#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) 
{

    // 일단 citations 중에서 최고값부터 구하기
    auto iter = std::max_element(citations.begin(), citations.end());
    const int citationsMax = *iter;


    int hIndex = 0;
    for (int i = 0; i <= citationsMax; ++i) // 몇번 인용됐는지? 
    {
        int count = 0;
        for (int j = 0; j < citations.size(); ++j)
        {
            if (i <= citations[j]) // i번 이상 인용됐는지 체크 후 개수 세기
                ++count;
        }

        if (count >= i)
            hIndex = i; // 매번 업데이트

    }
    int answer = hIndex;
    return answer;
}


int main(void)
{
    int answer1 = solution({ 3, 0, 6, 1, 5 });
    int answer2 = solution({ 6, 5, 3, 3, 0 });
    return 0;
}