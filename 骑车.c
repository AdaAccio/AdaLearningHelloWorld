#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float x, y;
	scanf("%f", &x);

	if (x <= 15)
		y = 1;
	else if (x <= 30)
		y = 2;
	else
		y = x * 3 / 60;
	printf("x=%.0fy=%.2f", x, y);
	return 0;
}