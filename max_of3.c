#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c,max;
	scanf("%d%d%d", &a, &b, &c);
	if (a>b)
	{
		if (a > c) {
			max = a;
		}
		else max = c;
	}

	if (a<b);
	{
		if (b > c)
		{
			max = b;
		}
		else max = c;
	}


	printf("%d", max);
	return 0;
}//C”Ô—‘¿‰–¶ª∞