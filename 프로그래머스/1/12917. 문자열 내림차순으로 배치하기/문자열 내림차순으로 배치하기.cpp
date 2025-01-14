#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string solution(string s) 
{
    //문자열 sort 대문자는 소문자보다 작다.
    std::sort(s.begin(), s.end(), [](char a , char b)
        {
            return a > b;
        });
    string answer = s;
    return answer;
}