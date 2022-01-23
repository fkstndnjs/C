#include <stdio.h>

int main(void)
{
	int num;
	int sum=0;
	int i=0;
	
	while(i<5)
	{
		scanf("%d", &num);
		
		while(num<1)
		{
			scanf("%d", &num);
		}
		
		i++;
		sum+=num;
	}
	
	printf("%d", sum);
	
	return 0;
}
