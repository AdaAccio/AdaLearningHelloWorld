#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int num;
    float num1;
    float x,y;
    char C;

    scanf("%d %c", &num, &C);
    x = num / 2.0;
    num1 = round(x);
    y = (int)num1;
    int i;
    int j;

    for (i = 1; i <= y; i++)
        for (j = 1; j <= num; j++)
        {
            printf("%c", C);
            if (j == num)
                printf("\n");
        }
    return 0;
}
