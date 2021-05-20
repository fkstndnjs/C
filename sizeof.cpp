#include <stdio.h>

void Func(int* arr)
{
	printf("%d\n", sizeof(arr));
}

void Func2(int arr[])
{
	printf("%d\n", sizeof(arr));
}

int main(void)
{
	int arr[]={1,2,3,4,5};
	
	Func(arr);
	Func2(arr);
	printf("%d", sizeof(arr));
	
	return 0;
}
