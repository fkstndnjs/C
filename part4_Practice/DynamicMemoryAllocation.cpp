#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)malloc(sizeof(int)*7);
	int i;
	
	*ptr1 = 20;
	
	for(i=0; i<7; i++)
		ptr2[i]=i+1;
		
	printf("%d \n", *ptr1);
	
	for(i=0; i<7; i++)
		printf("%d ", ptr2[i]);
		
	free(ptr1);
	free(ptr2);
	return 0;
}
