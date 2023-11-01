#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	char str[100];
	char result[100];
	scanf("%s", &str);

	int n = strlen(str),i,j;

	for (int i = 0; i < n; i++)
	{
		int a = 0;
		for (int j = i+1; j < n; j++)
		{
			if (str[i] > str[j])
			{
				a = str[j];
				str[j] = str[i];
				str[i] = a;
			}
		}
	}
	printf("%s", str);
	return 0;
}