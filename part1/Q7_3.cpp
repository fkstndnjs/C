#include <stdio.h>

int main(void)
{
	int num=2;
	int k=0, n;
	
	scanf("%d", &n);
	
	while(1)
	{
		if(num>n)
			break;
			
		num*=2;
		k++;
	}
	
	printf("%d", k);
	
	return 0;
}
