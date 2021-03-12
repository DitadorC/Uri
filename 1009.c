#include <stdio.h>

int main()
{
	char nome[0];
	double slf, tv, total;

	gets(nome);
	scanf("%lf%lf", &slf, &tv);


	total=slf+(tv*0.15);

	printf("TOTAL = R$ %.2lf\n", total);
	return 0;
}