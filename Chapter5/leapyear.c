#include <stdio.h>

int main() {
	int year;
	int result = 0;
	printf("연도를 입력하시오: ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0) {
		result = 1;
	}
	if (year % 400 == 0) {
		result = 1;
	}

	printf("result = %d", result);

	return 0;
}