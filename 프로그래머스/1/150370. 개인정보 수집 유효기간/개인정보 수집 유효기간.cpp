#include <string>
#include <vector>
using namespace std;

vector<int> CalDueDate(int tMonth, string privacy) {
    int year = stoi(privacy.substr(0, 4));
    int month = stoi(privacy.substr(5, 2));
    int date = stoi(privacy.substr(8, 2));

    // tMonth 추가
    month += tMonth;

    // 연도와 월 계산
    year += (month - 1) / 12;
    month = (month - 1) % 12 + 1;

    // 날짜는 항상 만료일의 마지막 날로 설정
    date -= 1;
    if (date == 0) {
        date = 28;
        month -= 1;
        if (month == 0) {
            month = 12;
            year -= 1;
        }
    }

    return vector<int>{year, month, date};
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<pair<char, int>> termVec;

    // 약관 정보 벡터에 저장
    for (const auto& term : terms) {
        char type = term[0];
        int month = stoi(term.substr(2));
        termVec.emplace_back(type, month);
    }

    vector<int> answer;

    // 오늘 날짜 파싱
    int todayYear = stoi(today.substr(0, 4));
    int todayMonth = stoi(today.substr(5, 2));
    int todayDay = stoi(today.substr(8, 2));

    for (size_t i = 0; i < privacies.size(); i++) {
        string privacy = privacies[i];
        char type = privacy.back(); // 약관 종류

        // 약관 종류에 해당하는 유효기간 찾기
        int tMonth = 0;
        for (const auto& term : termVec) {
            if (term.first == type) {
                tMonth = term.second;
                break;
            }
        }

        // 만료 날짜 계산
        vector<int> dueDate = CalDueDate(tMonth, privacy);
        int dueYear = dueDate[0];
        int dueMonth = dueDate[1];
        int dueDay = dueDate[2];

        // 만료 여부 확인
        if (dueYear < todayYear ||
           (dueYear == todayYear && dueMonth < todayMonth) ||
           (dueYear == todayYear && dueMonth == todayMonth && dueDay < todayDay)) {
            answer.emplace_back(i + 1);
        }
    }

    return answer;
}
