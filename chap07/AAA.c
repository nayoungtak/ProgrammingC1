#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	char name[20];
	char hello[20];


	printf("�λ縻 ���� �̸��� �Է��Ͻÿ�. ");
	scanf("%s %d %s", hello, &age, name);

	printf("�λ縻 %s\n", &hello);
	printf("���� %d��, %s�Դϴ�.\n", age, name);
	printf("�����մϴ�.");

	return 0;
}