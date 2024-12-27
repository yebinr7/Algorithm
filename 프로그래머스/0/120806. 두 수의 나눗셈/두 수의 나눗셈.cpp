#include <string>
#include <vector>

using namespace std;

using namespace std;
int solution(int num1, int num2) 
{
	float d = static_cast<float>(num1) / static_cast<float>(num2);
	//float d = num1 / num2;
	d *= 1000;
	return d;
}