/*
* ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment00
* ���� : 
* �ۼ��� : ����Ź
* ��¥ : 2025.04.00
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0000(void);

int main(void)
{
	assignment0000();
	return 0;
}

int assignment0000(void)
{
	int a = 0;
	printf("����ð�(��)? ");
	scanf("%d", &a);

	printf("%d�Դϴ�.", a);

	return 0;
}

