#include <stdio.h>

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5]={3,1,4,5,2};
	int max=arr[0], min=arr[0];
	int i, j;
	
	for(i=0; i<5; i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	
	for(i=0; i<5; i++)
	{
		if(arr[i]==max)
			break;
	}
	
	for(j=0; j<5; j++)
	{
		if(arr[j]==min)
			break;
	}
	
	maxPtr=arr+i;
	minPtr=arr+j;
	
	printf("%d, %d", *maxPtr, *minPtr);
	
	return 0;
}
