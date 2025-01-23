#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
using namespace std;

int solution(string s) {
    unordered_map<string, string> numMap = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"},
        {"four", "4"}, {"five", "5"}, {"six", "6"},
        {"seven", "7"}, {"eight", "8"}, {"nine", "9"}
    };
    
    for (const auto& pair : numMap) 
    {
        size_t pos = 0;
        pos = (s.find(pair.first, 0));
        //중복도 찾아야함;
        while ((pos != string::npos))
        {
            pos = (s.find(pair.first,0));
            
                s.replace(pos, pair.first.length(), pair.second);
            //pos업뎃한후 거기서 시작
            pos = pos + pair.second.length();
            pos = (s.find(pair.first, pos));
        } 
        
    }

    return stoi(s);
}