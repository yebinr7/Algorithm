#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";
    for (size_t i = 0; i < s.size(); i++)
	{
        if (s[i] == ' ')
            answer += ' ';
        else if (s[i] >= 'a' && s[i] <= 'z')
            answer += ((s[i] + n) - 'a') % 26 + 'a';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            answer += ((s[i] + n) - 'A') % 26 + 'A';
    }
    return answer;
}