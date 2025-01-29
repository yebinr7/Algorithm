#include <string>
#include <vector>

using namespace std;
string solution(int a, int b) {
    int days[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    string week[] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"}; // 2016년 1월 1일이 FRI
    
    int totalDays = b; 
    for (int i = 1; i < a; i++) { 
        totalDays += days[i]; 
    }
    
    return week[(totalDays - 1) % 7]; // 요일 배열에서 인덱스 찾기
}