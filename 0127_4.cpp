#include <stdio.h>

int main()
{
	int total;
	int a=500, b=700, c=400;
	
	scanf("%d", &total);
	
	for(int i=1; i<total/a; i++)
	{
		for(int j=1; j<total/b; j++)
		{
			for(int k=1; k<total/c; k++)
			{
				if(i*a+j*b+k*c==total)
					printf("ũ���� %d��, ����� %d��, �� �� %d��\n", i, j, k);
			}
		}
	}
	
	return 0;
}
