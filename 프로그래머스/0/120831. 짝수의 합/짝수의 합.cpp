#include <string>	
#include <vector>
#include <iostream>	
using namespace std;	

int solution(int n) {
	vector<int> arr;
	
	int sum = 0;
	
	for (size_t i = 1; i <= n; i++)
	{
		if (i % 2 == 0) {
			arr.push_back(i);
		}

	}

	for (int num : arr) {
		sum += num;
	}
	return sum;
}

int main() {
	solution(10);
	return 0;

	
}