#include <stdio.h>

int main()
{
	int t, v;
	double va;

	scanf("%d %d", &t, &v);

	va= (t*v)/12.0;

	printf("%.3lf\n", va);

	return 0;
}