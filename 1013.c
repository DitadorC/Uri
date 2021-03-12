#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int a, b, c, r1, r2;

	scanf("%d %d %d", &a, &b, &c);

	r1=(a+b+abs(a-b))/2;
	r2=(r1+c+abs(r1-c))/2;

	printf("%d eh o maior\n", r2);

	return 0;
}