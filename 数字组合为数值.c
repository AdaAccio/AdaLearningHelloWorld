#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	a = getchar()-'0';//����������
	b = getchar()-'0';
	c = getchar()-'0';

	int num;
	num = 100 * a + 10 * b + c;//����õ���λ����

	printf("%d", num);

	return 0;
}