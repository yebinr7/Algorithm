#include <string>
#include <vector>
#include <unordered_set>

using namespace std;
string solution(string s, string skip, int index)
{
    string answer = "";
    unordered_set<char> skipSet(skip.begin(), skip.end());

    for (char c : s)
    {
        int count = 0; // 이동 가능한 횟수 
        char current = c; // 커서 생각하자..
       
        while (count < index) // 이동가능한 횟수가 index 초가하면 탈출 index 5면 -> count 5번 
        {
            

            // 나는 원래 index를 증가시켰지만 ...
            // 카운트는 그대로이고 current를 증가..
            current++; // 다음 문자로 이동

            // 문자 증가시켜놓고 판별하는...............................
            
            // count 증가되는 경우
                // 

            if (current > 'z') // 방어코드
                current = 'a'; 

           

            if (skipSet.find(current) == skipSet.end()) // 못찾았다면 count 증가/
            {
                count++;
            }
          
               
        }

        answer += current; //변환된 문자 추가
    }
    return answer;
}