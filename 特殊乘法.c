#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF)
	{
		int sum = 0, m[10], n[10], x = 0, y = 0;
		do {
			m[x] = a % 10;
			a /= 10;
			x++;//输入x位 
		} while (a > 0);
		do {
			n[y] = b % 10;
			b /= 10;
			y++;//输入y位 
		} while (b > 0);
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				sum += m[i] * n[j];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}

