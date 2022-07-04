#include <stdio.h>

int main()
{
	int arr[10];
	int tmp;
	int count1=0, count2=9;
	
	for(int i=0; i<10; i++)
	{
		scanf("%d", &tmp);
		
		if(tmp%2!=0)
		{
			arr[count1]=tmp;
			count1++;
		}
		else
		{
			arr[count2]=tmp;
			count2--;
		}
	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
