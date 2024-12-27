#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) 
{
    int sum = 0;
    for (auto v : numbers)
    {
        sum += v;
    }
    //소수점 첫째자리 살리기위해서
    int tenTimesVariable = 10 * sum;
    double avrg = tenTimesVariable / numbers.size();
    double answer = avrg / 10;

   
    return answer;
}