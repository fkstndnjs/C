#include <stdio.h>

void Func1(int * arr)
{
	for(int i=0; i<10; i++)
	{
		if(arr[i]%2==0)
			printf("%d ", arr[i]);
	}
}

void Func2(int * arr)
{
	for(int i=0; i<10; i++)
	{
		if(arr[i]%2!=0)
			printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10];
	
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	Func1(arr);
	printf("\n");
	Func2(arr);
	
	return 0;
}
