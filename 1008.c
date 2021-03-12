#include <stdio.h>

int main()
{
	int num, h;
	float  sh, sala;

	scanf("%d%d%f", &num, &h, &sh);

	sala=sh*h;

	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", sala);

	return 0;
}