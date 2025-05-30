/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment10
* 내용 : 3 X 3 행렬의 합을 구하는 프로그램을 작성하시오. 행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.
* 작성자 : 나영탁
* 날짜 : 2025.05.30
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 3

int assignment10(void);
void addMatrix(int xarr[][SIZE], int yarr[][SIZE], int xyarr[SIZE][SIZE]);
void printMatrix(int xyarr[][SIZE]);


int main(void)
{
	assignment10();

	return 0;
}

int assignment10(void)
{
	int xarr[SIZE][SIZE] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
	int yarr[SIZE][SIZE] = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
	int xyarr[SIZE][SIZE] = { 0 };

	addMatrix(xarr, yarr, xyarr);

	printf("x 행렬:\n");
	printMatrix(xarr);
	printf("y 행렬:\n");
	printMatrix(yarr);
	printf("x + y 행렬:\n");
	printMatrix(xyarr);

	return 0;
}

void addMatrix(int xarr[][SIZE], int yarr[][SIZE], int xyarr[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			xyarr[i][j] = xarr[i][j] + yarr[i][j];
		}
	}
}

void printMatrix(int arr[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}