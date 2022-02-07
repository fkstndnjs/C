#include <stdio.h>

int main()
{
	int num;
	int tmp; 
	int arr[8]={0};
	 
	scanf("%d", &num);
	
	for(int i=0; i<10; i++)
	{
		if(num/2==0)
		{
			arr[i+1]=0;
			arr[i]=num%2;
			arr[i+2]=32;
			break;
		}
		else if(num/2==1)
		{
			arr[i+1]=1;
			arr[i]=num%2;
			arr[i+2]=32;
			break;
		}
		else
		{
			arr[i]=num%2;
			num/=2;
		}
	}
	
	for(int i=0; i<10; i++)
	{
		if(arr[i]==32)
			tmp=i;
	}
	
	for(int i=tmp-1; i>=0; i--)
	{
		printf("%d", arr[i]);
	}
	
	return 0;
}
