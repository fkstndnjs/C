#include <stdio.h>

void Func(int num)
{
	int a=0;
	int b=1;
	int next=0;
	
	if(num==1)
		printf("0");
	else
	{
		printf("%d %d ", a, b);
		
		for(int i=2; i<num; i++)
		{
			next=a+b;
			printf("%d ", next);
			a=b;
			b=next;
		}
	}
}

int main()
{
	int num;
	
	scanf("%d", &num);
	
	Func(num);
	
	return 0;
}
