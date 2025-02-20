#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <sstream>
using namespace std;

// 빵: 1 야채: 2 고기: 3  
// 1, 2, 3, 1 빵야고빵 
// 배열 주어졌을때, 만들 수 있는 햄버거의 개수 

// for문 돌면서 1만나면 체크 2만나면 체크 3만나면 체크 1만나면 체크, 후 햄버거 개수 ++ 

// 1이 한개 채워져 있는 상황에서만 2를 넣을 수 있다.
// 1과 2가 채워져 있는 상황에서만 3을 넣을 수 있다.
// 1과 2와 3이 채워져 있는 상황에서야 1만나면 빵완성된다.



int solution(vector<int> ingredient)
{
    int answer = 0;
    string str;
    ostringstream oss;
    // 연속된 1, 2, 3, 1 모양 생기면 뺀다. 

    //문자열로 바꿀까? 
    //find 이용해서 find 1231 모양 찾고 빼고 
    // 다시 find
    for (int in : ingredient)
    {
        oss << in;
        //str+=to_string(in);
    }
    str = oss.str();
    int findIdx = 0;

    while (true/*str.find("1231") != string::npos*/)
    {
        findIdx = str.find("1231", findIdx); //!!! 찾은 곳부터 찾기 -> 근데 왼쪽에서 생기면 우짬?
        if (findIdx == string::npos)
            break;
        str.erase(findIdx, 4); //1234길이 
        answer++; //찾았으니 추가 


        // pos를 이전 위치로 이동하여 새로 생긴 패턴 확인
        findIdx = std::max(0, (int)findIdx - 3); // 패턴이 겹쳐질 수 있으니 뒤로 이동

    }
    //최악의 경우 100만 / 4개 => 25만 * find(25만)  625억..번?..

    return answer;
}
