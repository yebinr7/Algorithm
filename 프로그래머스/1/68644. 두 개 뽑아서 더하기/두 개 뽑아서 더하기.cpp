#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    // 중복 제거할 필요 없다; 
    // 그냥 바로 오름차순 
    sort(numbers.begin(), numbers.end()); //오름차순..
    set<int> sumSet; //0으로 초기화되나?
    for (int i = 0; i < numbers.size() - 1; ++i)
    {
        for (int j = i + 1; j < numbers.size(); ++j)
        {
            int sum = numbers[i] + numbers[j];
            sumSet.emplace(sum);
        }
    }

    for (auto s : sumSet)
    {
        answer.emplace_back(s);
    }
    return answer;
}

int main(void)
{

    vector<int> v1 = solution({ 2,1,3,4,1 });
    vector<int> v2 = solution({ 5,0,2,7 });
    return 0;
}