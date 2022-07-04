#include <stdio.h>

void Fib(int num)
{
	int first=0;
	int second=1;
	int sum=0;
	
	if(num==1)
		printf("%d", first);
	else if(num==2)
		printf("%d %d", first, second);
	else
	{	 
		printf("%d %d ", first, second);
		
		for(int i=2; i<num; i++)
		{
			sum=first+second;
			printf("%d ", sum);
			first=second;
			second=sum;
		}
	}
}

int main(void)
{
	int num;
	
	scanf("%d", &num);
	
	Fib(num);
	
	return 0;
}
