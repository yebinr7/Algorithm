#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> topK;
    //k번 4라면 4등 매반복마다 벡터에 넣기

    for (size_t i = 0; i < score.size(); i++)
    {
        topK.emplace_back(score[i]);
       //내림차순하고 [k-1]번 값 answer에추가
       std::sort(topK.begin(), topK.end(), greater<int>());
       // k개 이상이면 k번째 이후 점수는 제거
       
       if (topK.size() > k) 
       { //k개보다 많아지면 버리기 
           topK.pop_back();
       }

       //answer.emplace_back(topK[k - 1]);//최하위
       answer.emplace_back(topK.back()); //k개의 마지막애 리턴
    }
    return answer;
}