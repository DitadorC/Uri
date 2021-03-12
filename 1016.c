#include <stdio.h>

int main()
{
	int x, r2;
	double r1;

	scanf("%d", &x);

	r1=x/30.0;

	r2=r1*60;

	printf("%d minutos\n", r2);
	return 0;
}