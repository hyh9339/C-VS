#include <stdio.h>

int main() {
	int num;
	int num2[8] = { 0 };
	printf("10진수: ");
	scanf("%d", &num);
	
	for (int i = 7; i >= 0; --i) {
		num2[i] = num % 2;
		num /= 2;
	}

	for (int i = 0; i < 8; ++i) {
		printf("%d", num2[i]);
	}
	printf("\n");
	
	return 0;
}