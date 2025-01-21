#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int tSize = t.size();
    int pSize = p.size();
    int answer = 0;

    for (int i = 0; i <= tSize - pSize; i++) { // 인덱스 초과 방지
        string substr = t.substr(i, pSize); // 부분 문자열 추출
        if (substr <= p) { // 문자열 비교
            answer++;
        }
    }

    return answer;
}