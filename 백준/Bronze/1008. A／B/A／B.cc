#include <iostream>	
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b;
	
	//a == 1.0,000,000,000,000,000 
	//
	c = a / b;// c는 0.33,333,333,333,333,331 16자리의 유효숫자(정밀도)

	/*
	값 0.33333333333333331의 상대오차 10 ^-9 에 따른 신뢰 가능한 범위
	double로 표현되는 실제 값 * 상대오차 -> 실제값에 더하고 빼기해서 하한과 상한의 범위 찾아낸다!
	[0.333333332999999977,0.333333333666666643]
	*/

	cout.precision(10);
	cout << c;  

	

	return 0;
}