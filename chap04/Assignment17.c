/*
* 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment17
* 내용 : 7번째 비트만 1인 값, 15번째 비트만 1인 값, 13번째 비트만 1인 값, 31번째 비트만 1인 값을 구해서
*		 16진수와 10진수로 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.04.10
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0407(void);

int main(void)
{
	assignment0417();
	return 0;
}

double assignment0417(void)
{
	int a = 0;
	printf("재생시간(초)? ");
	scanf("%d", &a);

	printf("%d입니다.", a);

	return 0;
}

