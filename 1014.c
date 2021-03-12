#include <stdio.h>

int main()
{
	int x;
	float y,r;

	scanf("%d %f", &x, &y);

	r=x/y;

	printf("%.3f km/l\n", r);
	return 0;
}