#include <stdio.h>

int main()
{
	int nota, sn, cem=0, cinque=0, vinte=0, dez=0, cinco=0, dois=0, um=0;

	scanf("%d", &nota);

	sn=nota;

	while (sn!=0)
	{
		if(sn>=100)
		{
			cem=sn/100;
		    sn=sn%100;
		}
		else if (sn>=50)
		{
			cinque=sn/50;
		    sn=sn%50;
		}
		else if(sn>=20)
		{
			vinte=sn/20;
		    sn=sn%20;
		}
		else if(sn>=10)
		{
			dez=sn/10;
		    sn=sn%10;
		}
		else if(sn>=5)
		{
			cinco=sn/5;
		    sn=sn%5;
		}
		else if(sn>=2)
		{
			dois=sn/2;
		    sn=sn%2;
		}
		else if (sn>=1)
		{
			um=sn/1;
		    sn=sn%1;
		}
	}

	printf("%d\n", nota);
	printf("%d nota(s) de R$ 100,00\n", cem);
	printf("%d nota(s) de R$ 50,00\n", cinque);
	printf("%d nota(s) de R$ 20,00\n", vinte);
	printf("%d nota(s) de R$ 10,00\n", dez);
	printf("%d nota(s) de R$ 5,00\n", cinco);
	printf("%d nota(s) de R$ 2,00\n", dois);
	printf("%d nota(s) de R$ 1,00\n", um);
	return 0;
}