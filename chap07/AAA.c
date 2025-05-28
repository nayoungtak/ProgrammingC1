#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	char name[20];
	char hello[20];


	printf("인사말 나이 이름을 입력하시오. ");
	scanf("%s %d %s", hello, &age, name);

	printf("인사말 %s\n", &hello);
	printf("저는 %d살, %s입니다.\n", age, name);
	printf("감사합니다.");

	return 0;
}