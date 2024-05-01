#include <stdio.h>
#define PI 3.141592

int main() {
	double bc, ac, ae;

	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &bc);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%lf", &ac);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%lf", &ae);
	
	printf("피라미드의 높이는 %f입니다.\n", ae * bc / ac);
	
	return 0;
}