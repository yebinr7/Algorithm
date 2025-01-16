#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

long long solution(int price, int money, int count) {
    // 등차수열의 합 공식: n * (a + l) / 2
    long long total_cost = static_cast<long long>(price) * count * (count + 1) / 2; // 곱셈 먼저 수행
    long long difference = money - total_cost;

    return (difference >= 0) ? 0 : -difference; // 부족하면 절댓값 반환
}