#include <stdio.h>

int main(void)
{
	int n;
	int i=0, j=0;
	int direction=0;
	int count=1;
	int tmp=1;
	
	scanf("%d", &n);
	
	int arr[n][n]={0};
	
	while(count<=n*n)
	{
		arr[i][j]=count++;
		
		if(direction==0)
		{
			j++;
			if(j==n-tmp)
				direction=1;
		}
		else if(direction==1)
		{
			i++;
			if(i==n-tmp)
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
				tmp++;
				direction=0;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
