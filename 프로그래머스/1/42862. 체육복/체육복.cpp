#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) 
{
    // 교집합 제거
    vector<int> filteredLost;
    vector<int> filteredReserve;

    for (const auto& l : lost) {
        if (find(reserve.begin(), reserve.end(), l) == reserve.end()) {
            filteredLost.push_back(l);
        }
    }

    for (const auto& r : reserve) {
        if (find(lost.begin(), lost.end(), r) == lost.end()) {
            filteredReserve.push_back(r);
        }
    }

    lost = filteredLost;
    reserve = filteredReserve;

    // 배열 정렬
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    // 체육복 상태 초기화
    vector<int> clothesNum(n + 1, 1);

    for (const auto& reserveIdx : reserve)
        clothesNum[reserveIdx] += 1;

    for (const auto& lostIdx : lost)
        clothesNum[lostIdx] -= 1;

    // 빌려주기 로직
    for (const auto& lostIdx : lost) {
        // 좌측 학생에게 요청
        if (lostIdx > 1 && clothesNum[lostIdx - 1] == 2) {
            clothesNum[lostIdx]++;
            clothesNum[lostIdx - 1]--;
        }
        // 우측 학생에게 요청
        else if (lostIdx < n && clothesNum[lostIdx + 1] == 2) {
            clothesNum[lostIdx]++;
            clothesNum[lostIdx + 1]--;
        }
    }

    // 체육수업 참여 가능한 학생 수 계산
    int answer = count_if(clothesNum.begin() + 1, clothesNum.end(), [](int c) { return c > 0; });
    return answer;
}