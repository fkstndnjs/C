#include <stdio.h>

int main(void)
{
	int num=2;
	int count2=0;
	
	while(1)
	{
		int count=0;
		
		for(int i=1; i<=num; i++)
		{
			if(num%i==0)
				count++;
		}
		
		if(count==2)
		{
			printf("%d ", num);
			count2++;
			if(count2==10)
				break;
		}
		
		num++;
	}
	
	return 0;
}
