#include <stdio.h>

int main(void)
{
	int num;
	int a;
	
	scanf("%d", &num);
	
	a=num;
	
	for(int i=1; i<num*2; i++)
	{
		if(i%2==0)
			continue;
		
		for(int b=a; b>0; b--)
			printf(" ");
		
		for(int j=0; j<i; j++)
				printf("*");
		
		a--;
		
		printf("\n");
	}
	
	return 0;
	
}
