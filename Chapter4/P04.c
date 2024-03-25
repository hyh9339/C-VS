#include <stdio.h>

int main() {
	double width, depth, height;
	
	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &width, &depth, &height);	//double형이므로 lf로 받아야 함

	printf("상자의 부피는 %f입니다.\n", (width * depth * height));

	return 0;
}