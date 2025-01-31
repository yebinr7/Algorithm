#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int solution(int k, int m, vector<int> score)
{   //최대점수k
    //1박스안에 들어갈 사과개수 m개

    //sort -> nlogN 

    //make heap 기본값은 최대힙 O(N)
    //priority
    //std::make_heap(score.begin(), score.end(),less<int>());

    int price = 0;

    std::priority_queue<int, vector<int>,less<int>> maxHeap;
    for (auto sc : score)
        maxHeap.emplace(sc);



    //score를 m개씩 묶으면?
    size_t boxNum = score.size() / m;
    
    for (size_t i = 0; i < boxNum; ++i)
    {
        std::priority_queue<int, vector<int>, greater<int>> minHeapBox;

        //m번 반복
        for (size_t j = 0; j < m; ++j)
        {
            minHeapBox.emplace(maxHeap.top());
            maxHeap.pop();
        }
        price += m * minHeapBox.top();
    }

    //상위k개씩 뽑아서 상자만들기 -> 이 상자중 가장 작은 값 * 사과의 수 m 
    

    
    return price;
}