#include <string>
#include <vector>

using namespace std;
string solution(vector<string> seoul) {
    for (size_t i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim") {
            return "김서방은 " + to_string(i) + "에 있다";
        }
    }
    // 예외 처리
    return "김서방을 찾을 수 없습니다.";
}