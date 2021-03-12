#include <stdio.h>

int main()
{
	double a,b,c, at,ac,atra,aq,are, pi = 3.14159;

	scanf("%lf %lf %lf", &a, &b, &c);

	at=(a*c)/2;
	ac=	pi*c*c;
	atra=((a+b)*c)/2;
	aq=b*b;
	are=a*b;

	printf("TRIANGULO: %.3lf\n", at);
	printf("CIRCULO: %.3lf\n", ac);
	printf("TRAPEZIO: %.3lf\n", atra);
	printf("QUADRADO: %.3lf\n", aq);
	printf("RETANGULO: %.3lf\n", are);


	return 0;
}