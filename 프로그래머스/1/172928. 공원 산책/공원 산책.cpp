#include <string>
#include <vector>

using namespace std;

struct Pos {
    int x, y;

    Pos operator+(const Pos& other) const {
        return {x + other.x, y + other.y};
    }
};

bool canGo(Pos& currentPos, const string& instruction, const vector<string>& park) {
    int w = park[0].size();
    int h = park.size();

    Pos direction;
    int steps = instruction[2] - '0';
    switch (instruction[0]) {
        case 'E': direction = {1, 0}; break;
        case 'W': direction = {-1, 0}; break;
        case 'S': direction = {0, 1}; break;
        case 'N': direction = {0, -1}; break;
        default: return false;
    }

    Pos temp = currentPos;
    for (int i = 0; i < steps; ++i) {
        temp = temp + direction;

        // 맵 경계 체크
        if (temp.x < 0 || temp.y < 0 || temp.x >= w || temp.y >= h)
            return false;

        // 장애물 체크
        if (park[temp.y][temp.x] == 'X')
            return false;
    }

    // 이동 가능하면 실제 위치 갱신
    currentPos = temp;
    return true;
}

vector<int> solution(vector<string> park, vector<string> routes) {
    Pos currentPos;

    // 시작 위치 찾기
    for (int y = 0; y < park.size(); ++y) {
        size_t x = park[y].find('S');
        if (x != string::npos) {
            currentPos = {static_cast<int>(x), y};
            break;
        }
    }

    // 명령어 수행
    for (const string& route : routes) {
        canGo(currentPos, route, park);
    }

    return {currentPos.y, currentPos.x};
}
