#include <vector>
#include <queue>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> minHeap; // 최소 힙

    for (int i = 0; i < score.size(); i++) {
        minHeap.push(score[i]); // 점수 추가

        // 힙 크기가 k를 초과하면 가장 작은 값을 제거
        if (minHeap.size() > k) {
            minHeap.pop();
        }

        // 현재 힙의 최상단 값(최소값)을 결과에 추가
        answer.push_back(minHeap.top());
    }

    return answer;
}