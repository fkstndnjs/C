#include <stdio.h>

int main()
{
	int n;
	int k=1;
	int total=2;
	
	scanf("%d", &n);
	
	if(n==1)
		printf("%d\n", 0);
	else
	{
		while(1)
		{
			total*=2;
			
			if(total>n)
				break;
				
			k++;
		}
		printf("%d", k);
	}
	
	return 0;
}
