#include <stdio.h>
int main()
{
	int year = 2004;
	int a;//输入现在的年份
	int x;
	
	scanf_s("%d",&a);
	x = a - year;
	printf("days=%d",x*365);

	return 0;
}