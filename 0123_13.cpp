#include <stdio.h>

int main()
{
	for(int i=2; i<10; i++)
	{
		if(i%2==0)
		{
			for(int j=1; j<10; j++)
			{
				printf("%d X %d = %d\n", i, j, i*j);
				if(j==i)
					break;
			}
		}
		printf("\n\n");
	}
	
	return 0;
}
