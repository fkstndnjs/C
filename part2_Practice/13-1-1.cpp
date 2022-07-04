#include <stdio.h>

int main(void)
{
	int arr[5]={1,2,3,4,5};
	
	int* ptr=arr;
	
	for(int i=0; i<5; i++)
	{
		arr[i]+=2;
		ptr+=1;
	}
		
	for(int i=0; i<5; i++)
		printf("%d ", arr[i]);
	
	return 0;
}
