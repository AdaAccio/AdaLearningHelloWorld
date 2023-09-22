#include <stdio.h>
void butler(void);
int main(void)
{
	printf("I will summon the burler function.\n");
	butler();
	printf("yes.Bring me some tea.\n");

	int a, b;
	a = 2;
	b = 5;
	b = a;
	a = b;
	printf("%d %d\n", b, a);

	return 0;
}
void butler(void)
{
	printf("you rang,sir?\n");
}