#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
	

	// 예각일때, 0 < angle < 90 return 1
	// 직각일때, angle = 90 return 2
	// 둔각일때, 90 < angle < 180 return 3
	// 반구일때, angle = 180 return 4

	if (angle > 0 && angle < 90) return 1;
	else if (angle == 90) return 2;
	else if (angle > 90 && angle < 180) return 3;
	else if (angle == 180) return 4;
	else return 0;

	return 0;
}