﻿#include <stdio.h>

int main() {
	float f;

	printf("실수를 입력하시오: ");
	scanf("%f", &f);
	
	printf("실수형식으로는 %f입니다.\n", f);
	printf("지수형식으로는 %e입니다.\n", f);

	return 0;
}