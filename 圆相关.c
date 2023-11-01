#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	double r, h;//°ë¾¶ºÍ¸ß
	scanf("%lf%lf",&r, &h);
	
	double C1;
	C1 = PI * 2.0 * r;

	double Sa;
	Sa = PI * r * r;

	double Sb;
	Sb = 4 * PI * r * r;

	double Va;
	Va = PI * r *r*r* 4.0 / 3.0;

	double Vb;
	Vb = PI * r * r  * h;

	printf("C1=%.2lf\n", C1);
	printf("Sa=%.2lf\n", Sa);
	printf("Sb=%.2lf\n", Sb);
	printf("Va=%.2lf\n", Va);
	printf("Vb=%.2lf\n", Vb);
	
	return 0;

}