#include <stdio.h>

int main(void)
{
	int cream=500, shrimp=700, coke=400;
	
	for(int i=1; i<10; i++)
	{
		for(int j=1; j<10; j++)
		{
			for(int k=1; k<10; k++)
			{
				if(i*cream+j*shrimp+k*coke==3500)
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", i, j, k);
			}
		}
	}
	
	return 0;
}
