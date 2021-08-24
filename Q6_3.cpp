#include <stdio.h>

int main(void)
{
	int second;
	int count1=0, count2=0;
	
	scanf("%d", &second);
	
	
	if(second>3600)
	{
		while(second>3600)
		{
			second-=3600;
			count1++;
		}
	}
	
	if(second>60)
	{
		while(second>60)
		{
			second-=60;
			count2++;
		}
	}
	
	printf("H: %d, M: %d, S: %d", count1, count2, second);
	
	return 0;
}
