#include <stdio.h>

int main()
{
	char tipo[25], filo [25], classe[25];

	scanf("%s", &tipo);
	scanf("%s" , &filo);
	scanf("%s", &classe);

	if (tipo[0]== 'v')
	{
		if (filo[0] == 'a')
		{
			if (classe[0] == 'c')
			{
				printf("aguia\n");
			}
			else if (classe[0] == 'o')
			{
				printf("pomba\n");
			}
		}
		else if (filo [0] == 'm')
		{
			if (classe[0] == 'o')
			{
				printf("homem\n");
			}
			else if (classe[0] == 'h')
			{
				printf("vaca\n");
			}
		}
	}
	else if (tipo[0]== 'i')
	{
		if (filo[0] == 'i')
		{
			if (classe[2] == 'm')
			{
				printf("pulga\n");
			}
			else if (classe[2] == 'r')
			{
				printf("lagarta\n");
			}
		}
		else if (filo [0] == 'a')
		{
			if (classe[0] == 'h')
			{
				printf("sanguessuga\n");
			}
			else if (classe[0] == 'o')
			{
				printf("minhoca\n");
			}
		}
	}

	return 0;
}