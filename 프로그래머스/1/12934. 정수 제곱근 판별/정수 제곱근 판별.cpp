#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n)
{
    long long sqrt = std::sqrt(n);
    
    long long checkup = sqrt * sqrt;
    if (checkup == n)
        return (sqrt + 1) * (sqrt + 1);
    else
        return -1;
}
