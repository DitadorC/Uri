#include <stdio.h>

 int main()
 {
 	int n, q, count=1;
 	double res=0;

 	scanf("%d %d", &n, &q);

 	
 		switch(n)
 		{
 			case 1: res=4.00*q; printf("Total: R$ %.2lf\n", res);
 				break;
 			case 2: res=4.50*q; printf("Total: R$ %.2lf\n", res);
 				break;
 			case 3: res=5.00*q; printf("Total: R$ %.2lf\n", res);
 				break;
 			case 4: res=2.00*q; printf("Total: R$ %.2lf\n", res);
 				break;
 			case 5: res=1.50*q; printf("Total: R$ %.2lf\n", res);
 				break;
 		}

 	return 0;
 }