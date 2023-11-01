#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char what;
	while ((what = getchar()) != EOF)
	{
		int j = 0, k;
		char x[6];
		x[0] = what;

		int i = 1;
		while ((x[i] = getchar()) != '\n')
		{
			i++;
		}
		printf("%d\n", i);
		for (j; j < i; j++)
		{
			printf("%c ", x[j]);
		}
		for (k = i; k >= 0; k--)
		{
			printf("%c", x[k]);
			if (k == 0)
				printf("\n");
		}
	}
	return 0;


}

