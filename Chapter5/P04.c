#include <stdio.h>

int main() {
	double height, heightInch, inch;
	int feet;

	printf("키를 입력하시오(cm): ");
	scanf("%lf", &height);

	heightInch = height / 2.54;
	feet = (int)(heightInch / 12);
	inch = heightInch - (double)(feet * 12);
	printf("%dcm는 %d피트 %f인치입니다.\n", (int)height, feet, inch);
	
	return 0;
}