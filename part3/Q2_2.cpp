#include <stdio.h>

int main(void)
{
	int size=0;
	int count=1;
	int i, j;
	int a=0;
	
	scanf("%d", &size);
	
	int arr[size][size]={0};
		
	while(count<=size*size)
	{
		i=a;
		
		for(j=a; j<size-a; j++)
		{
			arr[i][j]=count;
			count++;
		}
		
		j--;
		
		for(i+=1; i<size-a; i++)
		{
			arr[i][j]=count;
			count++;
		}
		
		i--;
		
		for(j-=1; j>=a; j--)
		{
			arr[i][j]=count;
			count++;
		}
		
		j++;
		
		for(i-=1; i>a; i--)
		{
			arr[i][j]=count;
			count++;
		}
		
		i++;
		
		a++;
	}
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
