
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0000(void);

int main(void)
{
	assignment0000();
	return 0;
}

double assignment0000(void)
{
	double test = 12.34567;
	printf("%f\n", test);
	printf("%.2f\n", test);
	printf("%8.2f\n", test);
	printf("%08.2f", test);

	return 0;
}

