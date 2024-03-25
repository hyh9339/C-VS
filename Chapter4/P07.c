#include <stdio.h>

int main() {
	double mass, speed, KE;

	printf("질량(kg): ");
	scanf("%lf", &mass);
	printf("속도(m/s): ");
	scanf("%lf", &speed);
	printf("운동에너지(J): %f\n", ((mass * speed * speed) / 2));

	return 0;
}