#include <stdio.h>

int main()
{
	int arr[6]={1,2,3,4,5,6};
	
	int * ptr1=arr;
	int * ptr2=arr+5;
	
	for(int i=0; i<6/2; i++)
	{
		int tmp;
		tmp=*ptr1;
		*(ptr1++)=*ptr2;
		*(ptr2--)=tmp;
	}
	
	for(int i=0; i<6; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
