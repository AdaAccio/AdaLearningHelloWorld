#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float C, F;
	scanf("%f", &F);//���뻪���¶�ֵ

	C = 5.0 / 9.0 * (F - 32);
	printf("c=%.2f", C);

	return 0;
}