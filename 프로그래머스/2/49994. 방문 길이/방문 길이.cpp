#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Point
{
    int x;
    int y;

    Point operator+(const Point& other)
    {
     
        Point result;
        result.x = this->x + other.x;
        result.y = this->y + other.y;
        return result;

    }

    bool operator==(const Point& other) const
    {
        if (x == other.x && y == other.y)
            return true;
        else
            return false;
    }

};

int solution(string dirs) 
{
    // 1. 하나씩 받아서 그거에 따른 좌표 옮기기 
    Point U = { 0,1 };
    Point R = { 1,0 };
    Point D = { 0,-1 };
    Point L = { -1, 0 };

    Point pNow = { 0,0 }; // 초기 위치 
    Point pNext = { 0,0 }; // 다음 갈 위치

    // 처음에 모든 좌표 -5,-5 ~ 5, 5 초기화하기? or 그냥 있는지 확인
    //unordered_map<Point, bool> checkMap;
    
    vector<std::pair<Point, Point>> checkMap;
    
    int answer = 0;
    for (char c : dirs)
    {
        // 매 문자당 좌표 이동 -> switch 이용? 
        if (c == 'U')
        {
            pNext = pNow + U;
            // 범위 체크!
            if (pNext.x < -5 || pNext.x>5
                || pNext.y < -5 || pNext.y>5)
            {
                continue; // 그냥 다시 반복문시작 
            }

            
            auto iter = find_if(checkMap.begin(), checkMap.end(), [&](const pair<Point, Point>& p)
                {
                    if (p.first == pNow && p.second == pNext
                        || p.first == pNext && p.second == pNow)
                        return true;
                    else
                        return false;
                });

            if (iter!= checkMap.end()) // 찾았다면
            {
                // 좌표 옮기기 넘어가기
                pNow = pNext;
            }
            else // 처음 있는거라면
            {
                ++answer;
                //추가하기
                checkMap.emplace_back(pNow,pNext); // 시작 - 끝 
                pNow = pNext;
            }
        }
        else if (c == 'R')
        {
            pNext = pNow + R;
            // 범위 체크!
            if (pNext.x < -5 || pNext.x>5
                || pNext.y < -5 || pNext.y>5)
            {
                continue; // 그냥 다시 반복문시작 
            }

            auto iter = find_if(checkMap.begin(), checkMap.end(), [&](const pair<Point, Point>& p)
                {
                    if (p.first == pNow && p.second == pNext
                        || p.first == pNext && p.second == pNow)
                        return true;
                    else
                        return false;
                });
            
            if (iter != checkMap.end()) // 찾았다면
            {
                // 좌표 옮기기 넘어가기
                pNow = pNext;
            }
            else // 처음 있는거라면
            {
                ++answer;
                //추가하기
                checkMap.emplace_back(pNow, pNext); // 시작 - 끝 
                pNow = pNext;
            }
        }
        else if (c == 'D')
        {
            pNext = pNow + D;
            // 범위 체크!
            if (pNext.x < -5 || pNext.x>5
                || pNext.y < -5 || pNext.y>5)
            {
                continue; // 그냥 다시 반복문시작 
            }
            auto iter = find_if(checkMap.begin(), checkMap.end(), [&](const pair<Point, Point>& p)
                {
                    if (p.first == pNow && p.second == pNext
                        || p.first == pNext && p.second == pNow)
                        return true;
                    else
                        return false;
                });

            if (iter != checkMap.end()) // 찾았다면
            {
                // 좌표 옮기기 넘어가기
                pNow = pNext;
            }
            else // 처음 있는거라면
            {
                ++answer;
                //추가하기
                checkMap.emplace_back(pNow, pNext); // 시작 - 끝 
                pNow = pNext;
            }
        }
        else //if (c == 'L')
        {
            pNext = pNow + L;
            // 범위 체크!
            if (pNext.x < -5 || pNext.x>5
                || pNext.y < -5 || pNext.y>5)
            {
                continue; // 그냥 다시 반복문시작 
            }
            auto iter = find_if(checkMap.begin(), checkMap.end(), [&](const pair<Point, Point>& p)
                {
                    if (p.first == pNow && p.second == pNext
                        || p.first == pNext && p.second == pNow)
                        return true;
                    else
                        return false;
                });

            if (iter != checkMap.end()) // 찾았다면
            {
                // 좌표 옮기기 넘어가기
                pNow = pNext;
            }
            else // 처음 있는거라면
            {
                ++answer;
                //추가하기
                checkMap.emplace_back(pNow, pNext); // 시작 - 끝 
                pNow = pNext;
            }
        }
    }


    return answer;
}

int main(void)
{
    int sol1 = solution("ULURRDLLU");
    int sol2 = solution("LULLLLLLU");
    return 0;
}