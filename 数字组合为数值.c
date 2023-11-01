#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	a = getchar()-'0';//输入三个数
	b = getchar()-'0';
	c = getchar()-'0';

	int num;
	num = 100 * a + 10 * b + c;//计算得到三位整数

	printf("%d", num);

	return 0;
}