#include <stdio.h>

int main(void)
{
	int size;
	int i=0, j=0;
	int count=1;
	int tmp=1;
	int direction=0;
	
	scanf("%d", &size);
	
	int arr[size][size]={0};
	
	while(count<=size*size)
	{
		arr[i][j]=count++;
		
		if(direction==0)
		{
			j++;
			if(j==size-tmp)
				direction=1;
		}
		else if(direction==1)
		{
			i++;
			if(i==size-tmp)
				direction=2;
		}
		else if(direction==2)
		{
			j--;
			if(j==tmp-1)
				direction=3;
		}
		else if(direction==3)
		{
			i--;
			if(i==tmp)
			{
				direction=0;
				tmp++;
			}
		}
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
