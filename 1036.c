#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, raiz1, raiz2, delta, rzd;

	scanf("%lf %lf %lf", &a, &b, &c);

	delta= (pow(b, 2.0)) - (4*a*c);
	rzd= sqrt(delta);

	if (delta < 0 ||  a == 0)
	{
		printf("Impossivel calcular\n");
	}

	else if (delta >= 0 || a != 0)
	{
		 raiz1=((-b)+rzd)/(2*a);
		 raiz2=((-b)-rzd)/(2*a);
		 printf("R1 = %.5lf\n", raiz1);
		 printf("R2 = %.5lf\n", raiz2);
	}
	return 0;
}