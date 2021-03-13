#include <stdio.h>

int main()
{
	int n, quan, qr=0, qs=0, qc=0, qt=0, i;
	double porcr, porcs, porcc;
	
	scanf("%d", &n);

	char tipo;

	for (i = 0; i < n; i++)
	{
		scanf("%d %c", &quan, &tipo);

		
		if (quan>=1 && quan<=15)
		{
				if (tipo == 'R')
			{
				qr=qr+quan;
			}
			else if (tipo == 'S')
			{
				qs=qs+quan;
			}
			else if (tipo == 'C')
			{
				qc=qc+quan;
			}

			qt=qt+quan;
		}
		else
		{
			scanf("%d %c", &quan, &tipo);

			i--;

		}
	}

	porcr=(100.00*qr)/qt;
	porcs=(100.00*qs)/qt;
	porcc=(100.00*qc)/qt;


	printf("Total: %d cobaias\n", qt);
	printf("Total de coelhos: %d\n", qc);
	printf("Total de ratos: %d\n", qr);
	printf("Total de sapos: %d\n", qs);
	printf("Percentual de coelhos: %.2lf %%\n", porcc);
	printf("Percentual de ratos: %.2lf %%\n", porcr);
	printf("Percentual de sapos: %.2lf %%\n", porcs);

	return 0;
}