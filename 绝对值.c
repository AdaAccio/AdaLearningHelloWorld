#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,x1;
    scanf("%lf",&x);//����x��ֵ

    x1 = fabs(x);//ȡx�ľ���ֵ
    y = round(x1);//��x�ľ���ֵ��������
    printf("round|%lf|=%d", x, (int)y);

    return 0;
}