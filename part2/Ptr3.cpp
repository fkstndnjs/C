#include <stdio.h>

int main(void)
{
	int arr[5]={1,2,3,4,5};
	int* ptr = arr;
	int total=0, i;
	
	for(i=0; i<5; i++)
		total+=*(ptr--);
		
	printf("%d", total);
	
	return 0;
}
