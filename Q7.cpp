#include <stdio.h>

int main(void)
{
	int n;
	int a=0, b=0;
	int count=1;
	int tmp_cnt=1;
	int direction=0;
	
	scanf("%d", &n);
	
	int arr[n][n]={0};
	
	while(count<=n*n)
	{
		arr[a][b]=count;
		count++;
		
		if(direction==0)
		{
			b++;
			if(b==n-tmp_cnt)
				direction=1;
		}
		else if(direction==1)
		{
			a++;
			if(a==n-tmp_cnt)
				direction=2;
		}
		else if(direction==2)
		{
			b--;
			if(b==tmp_cnt-1)
				direction=3;
		}
		else if(direction==3)
		{
			a--;
			if(a==tmp_cnt)
			{
				tmp_cnt++;
				direction=0;
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
