#include <stdio.h>

int main(void)
{
	int arr[2][2]={1,2,3,4};
	
	printf("%d, %d", *(arr+1), *(arr[1])+1);
	
	return 0;
}
