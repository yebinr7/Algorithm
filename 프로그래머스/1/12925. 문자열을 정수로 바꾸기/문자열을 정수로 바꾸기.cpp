#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(string s)
{
	int sum = 0;//가중치 곱한 실제 값
	int weight = 0;
	char first = s[0];

	int nDigits = s.size(); //몇자리수인지
	int digit = 0;//자리수


	if(first == 45||first==43)//`-`라면, `+`라면
	{	//음수
		int nDgits = s.size() - 1; //음수면 최상위 자리수 무시 ex)-12345 => 5자리 

		//j 는 1부터 시작 인덱스0에는 부호땜에
		int j = 1;

		while (true)
		{
			//현재 가중치
			weight = std::pow(10, nDigits - (j + 1));

			//실제배열에 있는 char를 숫자로 바꾸는 변환
			digit = s[j] - 48;

			//가중치에 따른합
			sum += (digit * weight);

			//증가
			j++;

			//탈출조건 '\0'만났을때
			if (s[j] == 0)//null일때
				break;
		}

		if (first == 45)
			return -1 * sum;
		else
			return sum;
	}
	else //if (first != 45/*-아스키코드*/)
	{
		int i = 0;
		//양수
		while (true)
		{
			//`48` ==0 따라서 0을 빼면 실제 숫자나옴 

			//현재 가중치
			weight = std::pow(10, nDigits - (i + 1));

			//실제배열에 있는 char를 숫자로 바꾸는 변환
			digit = s[i] - 48;

			//가중치에 따른합
			sum += (digit * weight);

			i++;

			//탈출조건: size초과했을시 

			//탈출조건 '\0'만났을때
			if (s[i] == 0)//null일때
				break;
		}
		return sum;
	}
}
