﻿#include <stdio.h>

int main() {
	int i = 0;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &i);

	printf("8진수로는 %#o입니다.\n", i);
	printf("10진수로는 %d입니다.\n", i);
	printf("16진수로는 %#x입니다.\n", i);


	return 0;
}