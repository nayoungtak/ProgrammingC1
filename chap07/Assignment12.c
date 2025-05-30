/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment12
* 내용 : 기차표 예매 프로그램을 작성하려고 한다.
*		 간단한 구현을 위해 좌석은 모두 10개라고 하자. 예매할 좌석수를 입력받아 빈 자리를 할당한다.
*		 예매할 때마다 각 좌석의 상태를 출력한다. O이면 예매 가능, X는 예매 불가를 의미한다. 더 이상 예메할 수 없으면 프로그램을 종료한다.
* 작성자 : 나영탁
* 날짜 : 2025.05.30
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM 10

void assignment12(void);


int main(void)
{
	assignment12();

	return 0;
}

void assignment12(void)
{
	char seat[NUM] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };

	
}

