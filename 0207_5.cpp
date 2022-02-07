#include <stdio.h>

int main()
{
	int arr[5]={4,3,5,1,2};
	int tmp;
	int num=4;
	
	for(int j=0; j<4; j++)
	{
		for(int i=0; i<num-j; i++)
		{
			if(arr[i]>arr[i+1])
			{
				tmp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
			}
		}
	}
	
	for(int i=0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
