#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(vector<int> nums) 
{
    //서로 다른 숫자 3개 골라서 더했을 때 소수인 경우의 수 리턴
    //소수 판별 로직
    //소수란? 어떤 수로 나눴을 때 자기 1과 자기 자신만 약수로 가지는 수 
    //3개 고르는 경우의 수 nC3  = n * n-1 * n-2  3개~50개 이므로 50 * 49 * 48 = 117600 번 
    
    //[0]~[49]까지 
    //0 1 2, 0 1 3, 0 1 4, 0 1 5.. 0 1 49 
    //0 2 3, 0 2 4, 0 2 5
    //0 3 4 
    //...
    //0 48 49
    
    //1 2 3, 1 2 4, 1 2 5,... 1, 2 49
    //1 3 4, 1 3 5, ... 1 3 49
    //...
    //1 48 49

    //...
    //47 48 49

    size_t sum = 0;
    size_t primeNum = 0;
    bool   bNotPrime = false;

    for (size_t i = 0; i < nums.size() - 2; ++i)
    {
        for (size_t j = i+1; j < nums.size() - 1; ++j)
        {
            for (size_t k = j+1; k < nums.size(); ++k)
            {
                sum = nums[i] + nums[j] + nums[k];
                bNotPrime = false;
                //소수 판별 제곱근 제외 
                for (size_t l = 2; l <= std::sqrt(sum); ++l)
                {
                    if (sum % l == 0)//나눠떨어지면 소수가 아님
                    {
                        bNotPrime = true;
                        break;
                    }
                }
                if (!bNotPrime)
                    primeNum++;
            }
        }
    }

    int answer = primeNum;


    return answer;
}
