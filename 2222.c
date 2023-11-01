#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i,j,n,Sn=0;
	int x[6] = {0};
	scanf("%d", &n);
	for (i=0; i <= n; i++)
	{
		for (j=1; j <= i; j++)
		{
			x[i] =x[i]*10+2;
	
		}
		Sn += x[i];
	}

	printf("%d", Sn);
	return 0;
}