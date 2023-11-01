#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m, n,max,min;
	scanf("%d%d", &m, &n);

	if (m >= n)
	{
		max = m;
		min = n;
	}
	else
	{
		max = n;
		min = m;
	}

	int i, j;
	
	for (i = max; i >= 1; i--)
	{
		if (max % i == 0)
		{
			if (min % i == 0)
				break;
			else
				continue;
		}
	}
	for (j = max; j <= max * min; j++)
	{
		if (j % max == 0 && j % min == 0)
			break;
		else
			continue;
	}
	printf("%d %d", i, j);
	return 0;
}