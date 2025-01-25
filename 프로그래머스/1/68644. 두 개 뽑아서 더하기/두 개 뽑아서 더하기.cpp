#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
    std::set<int> mySet;
    //0 1 2 3 4
    //3
    for(size_t i=0; i<numbers.size();++i)
    {
        for(size_t j=i+1; j<numbers.size(); ++j)
        {
            mySet.emplace(numbers[i]+numbers[j]);
        }
    }
    for(auto iter=mySet.begin();iter!=mySet.end();++iter)
        answer.emplace_back(*iter);
        
    return answer;
}
