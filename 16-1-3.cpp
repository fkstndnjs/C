#include <stdio.h>

int main(void)
{
	int arr[5][5];
	int sum;
	int total=0;
	
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<4; i++)
	{
		sum=0;
		
		for(int j=0; j<4; j++)
		{
			sum+=arr[i][j];
		}
		
		arr[i][4]=sum;
		total+=sum;
		
		printf("\n");
	}
	
	for(int i=0; i<4; i++)
	{
		sum=0;
		
		for(int j=0; j<4; j++)
		{
			sum+=arr[j][i];
		}
		
		arr[4][i]=sum;
		
		printf("\n");
	}
	
	arr[4][4]=total;
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
