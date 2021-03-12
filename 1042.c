#include <stdio.h>

int main()
{
	int n1, n2, n3, tr1,tr2, tr3, c;

	scanf("%d %d %d", &n1, &n2, &n3);

	tr1=n1; tr2=n2; tr3=n3;

	if(n1>n3)
	{
		c=n1;
		n1=n3;
		n3=c;
	}
	if(n2>n3)
	{
		c=n2;
		n2=n3;
		n3=c;
	}
	if(n1>n2)
	{
		c=n1;
		n1=n2;
		n2=c;
	}
	

	printf("%d\n %d\n %d\n", n1, n2, n3);
	printf("\n");
	printf("%d\n %d\n %d\n", tr1, tr2, tr3);

	return 0;
}