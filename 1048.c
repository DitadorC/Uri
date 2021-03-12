#include <stdio.h>

int main()
{
	double sla, rea=0.0;

	scanf("%lf", &sla);

	if (sla>=0 && sla<=400)
	{
		rea=sla*0.15;
		sla=rea+sla;

		printf("Novo salario: %.2lf\n", sla);
		printf("Reajuste ganho: %.2lf\n", rea);
		printf("Em percentual: 15 %%\n");
	}
	else if (sla>400 && sla<=800)
	{
		rea=sla*0.12;
		sla=rea+sla;

		printf("Novo salario: %.2lf\n", sla);
		printf("Reajuste ganho: %.2lf\n", rea);
		printf("Em percentual: 12 %%\n");
	}
	else if (sla>800 && sla<=1200)
	{
		rea=sla*0.10;
		sla=rea+sla;

		printf("Novo salario: %.2lf\n", sla);
		printf("Reajuste ganho: %.2lf\n", rea);
		printf("Em percentual: 10 %%\n");
	}
	else if (sla>1200 && sla<=2000)
	{
		rea=sla*0.07;
		sla=rea+sla;

		printf("Novo salario: %.2lf\n", sla);
		printf("Reajuste ganho: %.2lf\n", rea);
		printf("Em percentual: 7 %%\n");
	}
	else if (sla>2000)
	{
		rea=sla*0.04;
		sla=rea+sla;

		printf("Novo salario: %.2lf\n", sla);
		printf("Reajuste ganho: %.2lf\n", rea);
		printf("Em percentual: 4 %%\n");
	}


	return 0;
}