#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int year, month, day,d;//day�Ǹ���������d�Ǹ�������
	scanf("%d%d", &year, &month);//������ݺ��·�

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		d = 366;
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			day = 31;
		else if (month == 2)
			day = 29;
		else
			day = 30;
	}
	else
	{
		d = 365;
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			day = 31;
		else if(month == 2)
			day = 28;
		else
			day = 30;
	}
	printf("%d,%d", d,day);
	return 0;
}