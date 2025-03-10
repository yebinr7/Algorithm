#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// s가 1이 될때까지.. 반복 
// 110010101001 -> 111111 -> 6(10)-> 110  , 제거된0의개수 6
// 110 -> 11 -> 2(10) -> 10 , 제거된 0의 개수 7
// 10 -> 1 -> 1(10) -> 1 , 제거된 0의 개수 8 
// 따라서 총 3번 했음 

string toBinary(int size)
{
    string newStr = "";
    while (size != 0)
    {
        newStr+=to_string(size % 2);
        size = size / 2;
    }
    std::reverse(newStr.begin(), newStr.end());
    return newStr;
}

// 15만 제한.. 따라서.. 그냥 string 람다 ㄱㄱ
vector<int> solution(string s) 
{

    int deletedZeroCount = 0;
    int times = 0;
    while (s.size() != 1) // 1이면 탈출 
    {
        int size = s.size();
        // erase - remove - isdom
        // remove 조건에 맞는 애들은 다 오른쪽으로 옮김 new_end 
        auto newEndIter = remove_if(s.begin(), s.end(), [&deletedZeroCount](char c)
                                                          {
                                                             if(c=='0')
                                                             {
                                                                 deletedZeroCount++;
                                                                 //return c == '0';
                                                                 return true;
                                                             }
                                                             return false; // 이거 필요?
                                                          });

        //s.erase(s.begin(), newEndIter);
        s.erase(newEndIter, s.end());


        // 0 제거된 후 111... 의 길이 얻기
        size = s.size();

        // 그 길이를 다시 2진수로 만들기 & 다시 덮어쓰기 
        s = toBinary(size);

        ++times;
    }


    vector<int> answer;
    answer.emplace_back(times);
    answer.emplace_back(deletedZeroCount);
    return answer;
}

int main(void)
{
    vector<int> answer1 = solution("110010101001");
    vector<int> answer2 = solution("01110");
    vector<int> answer3 = solution("1111111");
    return 0;
}