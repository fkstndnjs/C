#include <stdio.h>

void Odd(int * arr)
{
	for(int i=0; i<10; i++)
		if(arr[i]%2==0)
			printf("%d ", arr[i]);
	printf("\n");
}

void Even(int * arr)
{
	for(int i=0; i<10; i++)
		if(arr[i]%2!=0)
			printf("%d ", arr[i]);

}

int main(void)
{
	int arr[10];
	
	for(int i=0; i<10; i++)
		scanf("%d", &arr[i]);
	
	Odd(arr);
	Even(arr);
	
	return 0;
}
