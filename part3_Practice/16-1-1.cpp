#include <stdio.h>

int main(void)
{
	int arr[3][9];
	
	for(int i=2; i<5; i++)
	{
		for(int j=1; j<10; j++)
		{
			arr[i-2][j-1]=i*j;
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<9; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
