#include <stdio.h>

int main(void)
{
	int arr[10];
	int temp;
	int j=0, k=9;
	
	for(int i=0; i<10; i++)
	{
		scanf("%d", &temp);
		
		if(temp%2!=0)
		{
			arr[j]=temp;
			j++;
		}
		else
		{
			arr[k]=temp;
			k--;
		}
	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
