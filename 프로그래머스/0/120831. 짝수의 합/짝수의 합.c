#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int sum;//전역변수라서 초기화가 필요없다. 0으로 초기화된다.


int solution(int n) {
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0)
		sum += i;
	}
	return sum;
}
int main() {

	solution(10);	


	return 0;
}