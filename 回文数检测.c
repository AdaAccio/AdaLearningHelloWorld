#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	
	while (scanf("%d", &n) != EOF)
	{
		int a = n;
		int i = 0, j = 0;
		while (a!=0)
		{
			i = a % 10;
			a /= 10;
			j = j * 10 + i;
		}
		if (j != n)
			printf("NO\n");
		else
			printf("Yes\n");
	}
	return 0;
}