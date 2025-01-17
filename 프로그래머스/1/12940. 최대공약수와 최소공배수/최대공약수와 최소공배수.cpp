#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <functional>
using namespace std;
vector<int> GetDivisorVector(int n)
{
    vector<int> nVector;
    //1. 최대공약수
      // 약수 == 나머지 0인 숫자들의 모임
    for (size_t i = 1; i <= std::sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                nVector.emplace_back(i);
                nVector.emplace_back(n / i); //짝넣어주기
            }
            else
            {
                nVector.emplace_back(i);//제곱이면 하나만 넣기
            }
        }
    }
    std::sort(nVector.begin(), nVector.end(), less<int>());
    return nVector;
}
int FindGreat(vector<int> a, vector<int>b)
{
    vector<int> commonVec;
    for (size_t i = 0; i < a.size(); i++)
    {   
        for (size_t j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                commonVec.emplace_back(a[i]);
                break;//찾았으면 안쪽 반복문 탈출 
            }
        }
    }
    //마지막값 반환(최대값)
    return commonVec[commonVec.size() - 1];
}
vector<int> solution(int n, int m)
{
    //최대공약수: 약수들 중, 같은놈중 최고값
    //최소공배수: n의 배수중 제일 같은 작은놈 
    vector<int> nVector = GetDivisorVector(n);
    vector<int> mVector = GetDivisorVector(m);
    //AB 중 같은애들 //둘이 같은수중 최대값 반환 
    int GDC = FindGreat(nVector, mVector);
    
    //공통배수중 가장 작은수 공식에의해..?
    int LCM = GDC * (n / GDC) * (m / GDC);


    vector<int> answer;
    answer.emplace_back(GDC);//최대공약수
    answer.emplace_back(LCM);//최소공배수 
    return answer;
}