#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	int num2=1;
	int z=0;
	
	int arr[num][num]={0};

	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		
		printf("\n");
	}
	printf("\n");
	
	
		for(int i=z; i<num; i++)
		{
			arr[z][i]=num2;
			num2++;
		}
		
		for(int i=z+1; i<num; i++)
		{
			arr[i][num-1]=num2;
			num2++;
		}
		
		for(int i=num-2; i>=0; i--)
		{
			arr[num-1][i]=num2;
			num2++;
		}
		
		for(int i=num-2; i>0; i--)
		{
			arr[i][z]=num2;
			num2++;
		}
		
		z++;
		
		
	
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
