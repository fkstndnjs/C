#include <stdio.h>

int main()
{
	int arr[5];
	int max, min, sum=0;
	for(int i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	max=arr[0], min=arr[0];
	
	for(int i=0; i<5; i++)
	{
		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
		sum+=arr[i];
	}
	
	printf("%d, %d, %d", max, min, sum);
	
	return 0;
}
