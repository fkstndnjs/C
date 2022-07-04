#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num=5;
	int* arr=(int*)malloc(sizeof(int)*num);
	int i=0;

	while(1)
	{
		scanf("%d", &arr[i]);
		
		if(arr[i]==-1)
			break;
		
		i++;
		
		if(i==num)
		{
			num+=3;
			arr=(int*)realloc(arr, sizeof(int)*num);
		}
	}
	
	for(int j=0; j<i; j++) //arr Ãâ·Â 
		printf("%d ", arr[j]);
	free(arr);
	return 0;
}
