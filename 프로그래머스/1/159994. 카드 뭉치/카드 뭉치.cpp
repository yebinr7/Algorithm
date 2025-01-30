#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int idx1 = 0; // cards1에서 사용할 인덱스
    int idx2 = 0; // cards2에서 사용할 인덱스

    for (const string& word : goal)
    {
        if (idx1 < cards1.size() && cards1[idx1] == word) 
        {
            // cards1에서 현재 단어를 사용할 수 있는 경우
            idx1++;
        }
        else if (idx2 < cards2.size() && cards2[idx2] == word)
        {
            // cards2에서 현재 단어를 사용할 수 있는 경우
            idx2++;
        }
        else 
        {
            // 두 카드 뭉치 모두에서 단어를 사용할 수 없는 경우
            return "No";
        }
    }
    return "Yes";
}
