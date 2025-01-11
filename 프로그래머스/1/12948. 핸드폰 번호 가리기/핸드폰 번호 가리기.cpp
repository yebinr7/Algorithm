#include <string>
#include <vector>

using namespace std;
string solution(string phone_number) {
    //마지막 인덱스 size()-1
    //size()-2
    //size()-3
    //size()-4
    string answer = phone_number;
    for(size_t i=0; i<phone_number.size()-4; i++)
    {
        answer[i] = '*';
    }
    return answer;
}

