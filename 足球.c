#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int count = 0;
    float ave=0;
	float sum = 0;
	int x;
	while (scanf("%d", &x)!=EOF)
	{
		getchar();
		sum += x;
		count++;
	}
	ave = sum / count;
	printf("%.4lf", ave / 100.0);
	return 0;
}