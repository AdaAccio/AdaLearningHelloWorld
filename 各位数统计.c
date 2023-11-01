#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char what;
	while ((what = getchar()) != EOF)
	{
		char x[1000]="\0";
		x[0] = what;
		int i = 1;
		while ((x[i] = getchar()) != '\n' && i < 999)
		{
			i++;
		}

		int num[10] = { 0 };
		for (int j = 0; j <i; j++)
		{
			
			switch (x[j])
			{
			case'0':
					num[0]++;
					break;
			case'1':
				num[1]++;
				break;
			case'2':
				num[2]++;
				break;
			case'3':
				num[3]++;
				break;
			case'4':
				num[4]++;
				break;
			case'5':
				num[5]++;
				break;
			case'6':
				num[6]++;
				break;
			case'7':
				num[7]++;
				break;
			case'8':
				num[8]++;
				break;
			case'9':
				num[9]++;
				break;
			default:
				break;
			}

		}
		int n ;
		for (n=0;n < 10; n++)
		{
			if(num[n]!=0)
				printf("%d:%d\n", n, num[n]);
		}
	}
	return 0;
}