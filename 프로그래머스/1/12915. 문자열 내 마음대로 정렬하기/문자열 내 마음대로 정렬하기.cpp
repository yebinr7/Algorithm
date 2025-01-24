#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n)
{
    sort(strings.begin(), strings.end(), [n](string a,  string b)
        {
        if (a[n] == b[n]) 
        {
            return a < b; // n번째 문자가 같으면 사전순 정렬
        }
        return a[n] < b[n]; // n번째 문자를 기준으로 정렬
        });
    return strings;
}
