#include <string>
#include <vector>
#include <sstream>
using namespace std;
string solution(string s, int n) {
    ostringstream oss; // 문자열을 조립할 스트림 객체 생성
    for (char c : s) {
        if (c == ' ') {
            oss << ' '; // 공백은 그대로 추가
        } else if (islower(c)) {
            oss << char((c - 'a' + n) % 26 + 'a'); // 소문자 처리
        } else if (isupper(c)) {
            oss << char((c - 'A' + n) % 26 + 'A'); // 대문자 처리
        }
    }
    return oss.str(); // 최종 문자열 반환
}