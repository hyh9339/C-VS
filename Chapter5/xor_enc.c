#include <stdio.h>

int main() {
	char data = 'a';
	char key = 0xff;

	char encrypted_data;
	encrypted_data = data ^ key;

	printf("암호화된 문자 = %c\n", encrypted_data);

	char orig_data;
	orig_data = encrypted_data ^ key;
	printf("원래의 데이터 = %c\n", orig_data);
	
	return 0;
}