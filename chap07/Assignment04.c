/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment04
* ���� : Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���ҿ� ã�Ƽ� �ε����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*		 �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.29
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment04(void);
int maxmum(int arrangement[]);
int minimum(int arrangement[]);


int main(void)
{
	assignment04();

	return 0;
}

int assignment04(void)
{
	int arrangement[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	
	maxmum(arrangement);
	minimum(arrangement);

	return 0;
}

int maxmum(int arrangement[])
{
	int maxvalue = arrangement[0];
	int maxindex = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arrangement[i] > maxvalue)
		{
			maxindex = i;
			maxvalue = arrangement[i];
		}
	}
	
	printf("�ִ�: �ε���=%d, ��=%d\n", maxindex, maxvalue);

	return 0;
}

int minimum(int arrangement[])
{
	int minivalue = arrangement[0];
	int miniindex = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arrangement[i] < minivalue)
		{
			miniindex = i;
			minivalue = arrangement[i];
		}
	}

	printf("�ּڰ�: �ε���=%d, ��=%d\n", miniindex, minivalue);

	return 0;
}
