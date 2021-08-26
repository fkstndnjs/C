#include <stdio.h>

int main(void)
{
	int arr[10];
	int num;
	int j=0, k=9;
	
	for(int i=0; i<10; i++)
	{
		scanf("%d", &num);
		
		if(num%2==0)
		{
			arr[k]=num;
			k--;
		}
		else
		{
			arr[j]=num;
			j++;
		}
	}
	
	for(int i=0; i<10; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

