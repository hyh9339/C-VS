#include <stdio.h>

int main() {
	int a, b, c, max;
	
	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	max = a;
	if (max < b) max = b;
	if (max < c) max = c;

	printf("최대값: %d\n", max);
	
	return 0;
}