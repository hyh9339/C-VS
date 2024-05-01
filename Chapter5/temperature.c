#include <stdio.h>

int main() {
	double f;
	double c;

	printf("화씨온도를 입력하시오: ");
	scanf("%lf", &f);
	
	c = (5.0 / 9.0) * (f - 32.0);
	printf("섭씨온도는 %lf입니다.\n", c);
	
	return 0;
}