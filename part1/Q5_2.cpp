#include <stdio.h>

int main(void)
{
	int count2=0;
	
	for(int i=1; i<100; i++)
	{
		int count=0;
		
		for(int j=1; j<=i; j++)
		{
			if(i%j==0)
				count++;
		}
		
		if(count==2)
		{
			printf("%d ", i);
			count2++;
			if(count2>9)
				break;
		}
		
	}
	
	return 0;
}
