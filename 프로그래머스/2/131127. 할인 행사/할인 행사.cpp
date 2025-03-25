#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;

    // 원하는 제품과 수량을 맵에 저장
    unordered_map<string, int> wantMap;
    for (size_t i = 0; i < want.size(); ++i) {
        wantMap[want[i]] = number[i];
    }

    // 슬라이딩 윈도우를 위한 맵 초기화
    unordered_map<string, int> windowMap;

    // 초기 윈도우 설정 (첫 10일)
    for (size_t i = 0; i < 10; ++i) {
        windowMap[discount[i]]++;
    }

    // 윈도우 검사 함수
    auto isMatch = [&]() -> bool {
        for (auto& pair : wantMap) {
            if (windowMap[pair.first] != pair.second) {
                return false;
            }
        }
        return true;
    };

    // 첫 번째 윈도우 검사
    if (isMatch()) {
        answer++;
    }

    // 슬라이딩 윈도우 이동
    for (size_t i = 10; i < discount.size(); ++i) {
        windowMap[discount[i - 10]]--; // 이전 요소 제거
        windowMap[discount[i]]++;     // 새로운 요소 추가

        if (isMatch()) {
            answer++;
        }
    }

    return answer;
}

int main() {
    int answer1 = solution(
        { "banana", "apple", "rice", "pork", "pot" },
        { 3, 2, 2, 2, 1 },
        { "chicken", "apple", "apple", "banana", "rice", "apple", "pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana" });

    int answer2 = solution(
        { "apple" },
        { 10 },
        { "banana", "banana", "banana", "banana", "banana", "banana", "banana", "banana", "banana", "banana" });

    return 0;
}