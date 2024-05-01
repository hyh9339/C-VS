#include <stdio.h>

int main() {
	int year;
	int result = 0;

	printf("연도를 입력하시오: ");
	scanf("%d", &year);

	if ((year % 4 == 0) && (year % 4 != 0) || (year % 4 == 0)) {
		result = 1;
	}

	printf("result = %d\n", result);

	return 0;
}