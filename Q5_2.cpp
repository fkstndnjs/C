#include <stdio.h>

void BSort(int* arr, int len)
{
	int tmp;
	
	for(int i=0; i<len-1; i++)
	{
		for(int j=0; j<(len-i)-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
		printf("%d번째 정렬: ", i+1);
		 
		for(int i=0; i<len; i++) 
			printf("%d ", arr[i]);
			
		printf("\n");
	}
}

int main(void)
{
	int arr[10]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	printf("정렬 전: "); 
	
	for(int i=0; i<sizeof(arr)/sizeof(int); i++)
		printf("%d ", arr[i]);

	printf("\n"); 
 
	BSort(arr, sizeof(arr)/sizeof(int));
	
	printf("정렬 후: "); 
	
	for(int i=0; i<sizeof(arr)/sizeof(int); i++)
		printf("%d ", arr[i]);
		
	printf("\n");
	
	return 0;
}
