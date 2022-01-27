#include <stdio.h>

int main()
{
	int num=0;
	
	for(int i=2; i<100; i++)
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
			num++;
			if(num==10)
				break;
		}	
		else
			continue;
	}
	
	return 0;
}
