#include <stdio.h>

int main()
{
	int num1, num2;
	int tmp;
	
	scanf("%d %d", &num1, &num2);
	
	if(num1>num2)
	{
		tmp=num1;
		num1=num2;
		num2=tmp;
	}
	
	for(int i=num1; i<num2+1; i++)
	{
		for(int j=1; j<10; j++)
		{
			printf("%d X %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	
	return 0;
}
