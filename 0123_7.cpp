#include <stdio.h>

int main()
{
	int i=0, j;
	
	while(i<5)
	{	
		j=0;
		while(j<i)
		{
			printf("O ");
			j++;
		}
		i++;
		printf("*\n");
	}
	
	return 0;
}
