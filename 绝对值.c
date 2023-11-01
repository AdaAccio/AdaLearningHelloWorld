#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,x1;
    scanf("%lf",&x);//输入x的值

    x1 = fabs(x);//取x的绝对值
    y = round(x1);//对x的绝对值四舍五入
    printf("round|%lf|=%d", x, (int)y);

    return 0;
}