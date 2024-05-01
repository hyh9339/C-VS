#include <stdio.h>
#define PI 3.141592

int main() {
	double r;

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &r);

	printf("표면적은 %f입니다.\n", 4.0 * PI * r * r);
	printf("체적은 %f입니다.\n", (4.0 / 3.0) * PI * r * r * r);
	
	return 0;
}