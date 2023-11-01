#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	double x1 = 0,x2 = 3.14;
	double n = 10000, sum = 0,a,i;
	a =  x2 /n;
	for (i=0; x1+i*a <= x2; i++)
	{
		sum =sum+sin(x1 + i * a);
	}
	printf("%f", sum);
	return 0;
}