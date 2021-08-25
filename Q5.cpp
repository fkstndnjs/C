#include <stdio.h>

void Bubble(int* arr, int len)
{
	for(int i=0; i<len-1; i++)
	{
		for(int j=0; j<len-1-i; j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(void)
{
	int arr[4]={3,1,4,2};
	
	for(int i=0; i<4; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	Bubble(arr, 4);
	
	for(int i=0; i<4; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
