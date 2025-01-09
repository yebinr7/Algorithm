#include <string>
#include <vector>

using namespace std;
string solution(vector<string> seoul) {
    
    //1.배열처럼 사용
    //std::string findKim = "Kim";
    for (size_t i = 0; i < seoul.size(); i++)
    {
        if ((seoul[i] == std::string("Kim")))
        {
            string iString = to_string(i);
            string answer = "김서방은 " + iString + "에 있다";
            return answer;
        }
    }

    //2. 이터레이터 이용?
   
    //예외?
    return "";
}