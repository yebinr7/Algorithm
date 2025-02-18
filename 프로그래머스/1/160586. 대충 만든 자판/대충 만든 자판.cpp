#include <string>
#include <vector>
#include <climits> // INT_MAX 사용
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    for (const auto& targetString : targets) { // targets 배열에서 문자열 하나씩 처리
        int accum = 0; // 누적 키 입력 횟수
        bool isPossible = true; // targetString 작성 가능 여부

        for (const auto& c : targetString) { // targetString 내 문자 하나씩 처리
            int minIdx = INT_MAX; // 최소 입력 횟수 초기화

            for (const auto& km : keymap) { // keymap 배열에서 각 키맵 문자열 확인
                int findIdx = km.find(c);
                if (findIdx != string::npos) {
                    minIdx = min(minIdx, findIdx); // 최소 입력 횟수 갱신
                }
            }

            if (minIdx == INT_MAX) { // 문자를 찾지 못한 경우
                isPossible = false;
                break;
            } else {
                accum += (minIdx + 1); // 인덱스는 0부터 시작하므로 +1
            }
        }

        if (isPossible) {
            answer.emplace_back(accum); // 작성 가능하면 누적값 추가
        } else {
            answer.emplace_back(-1); // 작성 불가능하면 -1 추가
        }
    }

    return answer;
}
