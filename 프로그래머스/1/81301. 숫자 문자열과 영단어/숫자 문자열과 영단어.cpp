#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) 
{    
    ostringstream oss;
    ostringstream det;
    //s의 길이 50 2500번 가능
    //ischar인지
    int answer = 0;
    
    for (size_t i = 0; i < s.size(); i++)
    {
        if (std::isdigit(s[i]))
            oss << s[i]; //새로운 숫자문자열 만들고 -> stoi 반환 
        else
        {
            //찾을때 까지 det에 넣기
            det << s[i];
            //알파벳
            //one two three.. 모아서 맞는지 확인 
            if (det.str() == "zero") {
                oss << '0';
                det.str("");
            }
            else if (det.str() == "one"){
                oss << '1';
                det.str("");
            }
            else if (det.str() == "two"){
                oss << '2';
                det.str("");
            }
            else if (det.str() == "three"){
                oss << '3';
                det.str("");
            }
            else if (det.str() == "four"){
                oss << '4';
                det.str("");
            }
            else if (det.str() == "five"){
                oss << '5';
                det.str("");
            }
            else if (det.str() == "six"){
                oss << '6';
                det.str("");
            }
            else if (det.str() == "seven"){
                oss << '7';
                det.str("");
            }
            else if (det.str() == "eight"){
                oss << '8';
                det.str("");
            }
            else if (det.str() == "nine"){
                oss << '9';
                det.str("");
            }
        }
    }
    answer = std::stoi(oss.str());
    return answer;
}