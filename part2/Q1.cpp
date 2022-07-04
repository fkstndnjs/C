#include <stdio.h>

void Show1(int* arr)
{
	for(int i=0; i<10; i++)
	{
		if(arr[i]%2==0)
			printf("%d ", arr[i]);
	}
	printf("\n");
}

void Show2(int* arr)
{
	for(int i=0; i<10; i++)
	{
		if(arr[i]%2!=0)
			printf("%d ", arr[i]);
	}
}

int main(void)
{
	int arr[10];
	
	for(int i=0; i<10; i++)
	{
		scanf("%d", arr+i);
	}
	
	Show1(arr);
	Show2(arr);
	
	return 0;
}
