#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int solution(int k, vector<int> tangerine)
{
    // 종류 1 ~ 1000만 까지 배열 만들기 or MAX까지 배열만들기
    // 벡터 요소에서 최댓값 찾기
    //; 벡터에서 iter로 찾
    auto iter = std::max_element(tangerine.begin(), tangerine.end());
    const int maxSize = *iter; // 최댓값

    // 1부터 최댓값 까지 배열 만들기
    // 0부터 시작해도되는 이유는...  [0] 부터 [maxSize+1]까지
    vector<int> typeVector(maxSize + 1); // 0으로 모두 초기화 됨 ? 기본값 아니면 뒤에 ,0

    // tangerine 돌면서 인덱스에 넣어주기
    for (size_t i = 0; i < tangerine.size(); ++i)
    {
        ++typeVector[tangerine[i]]; // 그 타입인덱스에 귤 채워놓기
    }

    // 내림차순을 통해 정리
    // 귤을 모두 채웠다면 상위 k개 종류별로 세기 
    //sort(typeVector.end(), typeVector.begin());
    sort(typeVector.begin(), typeVector.end(), greater<int>());
    int answer = 0;
    int kSum = 0;
    for (int i = 0; i < typeVector.size(); ++i)
    {
        kSum += typeVector[i];
        if (kSum >= k)
        {
            answer = i + 1; //0번 인덱스부터 시작했으니 +1 해줘야 종류개수 
            break;
        }
    }


   
    return answer;
}

int main(void)
{
    int answer1 = solution(6, { 1, 3, 2, 5, 4, 5, 2, 3 });
    int answer2 = solution(4, { 1, 3, 2, 5, 4, 5, 2, 3 });
    int answer3 = solution(2, { 1, 1, 1, 1, 2, 2, 2, 3 });


        
    return 0;
}