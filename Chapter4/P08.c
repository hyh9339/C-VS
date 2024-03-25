#include <stdio.h>

int main() {
	int c;	//숫자로 입력받으므로 int형

	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &c);	//숫자로 입력받으므로 %d
	printf("문자: %c입니다.", c);		//문자로 출력하므로 %c

	return 0;
}