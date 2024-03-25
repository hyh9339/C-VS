#include <stdio.h>

int main() {
	float f;
	printf("평을 입력하세요: ");
	scanf("%f", &f);

	printf("%f평방미터입니다.\n", f * 3.3058);

	return 0;
}