#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> topK; // 명예의 전당 점수 목록

    for (int i = 0; i < score.size(); i++) {
        topK.push_back(score[i]); // 새로운 점수 추가

        // topK를 항상 내림차순 정렬 유지
        sort(topK.begin(), topK.end(), greater<int>());

        // k개 이상이면 k번째 이후 점수는 제거
        if (topK.size() > k) {
            topK.pop_back();
        }

        // 현재 명예의 전당의 최하위 점수를 answer에 추가
        answer.push_back(topK.back());
    }

    return answer;
}