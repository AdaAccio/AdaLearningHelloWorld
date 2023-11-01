#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char what;
	while ((what = getchar()) != EOF)
	{
		int j = 0;
		char x[114514];
		x[0] = what;
		
		int letter=0,sig=0, spa=0,num=0;
		
		int i = 1;
		while ((x[i] = getchar()) != '\n')
		{
			i++;
		}
		for (j-1; j <= i; j++)
		{
			if ((int)x[j] == 32)
				spa++;
			else if ((int)x[j] <= 90&& (int)x[j] >=65)
			{
				letter++;
			}
			else if ((int)x[j] <= 122 && (int)x[j] >= 97)
			{
				letter++;
			}
			else if ((int)x[j] <= 57 && (int)x[j] >= 48)
			{
				num++;
			}
			else if ((int)x[j] == '\n')
			{
				break;
			}
			else
			{
				sig++;
			}
		}
		printf("%d %d %d %d", letter, num, spa, sig);
	}
		return 0;
	}