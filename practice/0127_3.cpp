#include <stdio.h>

int main()
{
	int num1, num2;
	int tmp=1;
	
	scanf("%d %d", &num1, &num2);
	
	while(1)
	{
		if(num1%2==0 && num2%2==0)
		{
			num1/=2;
			num2/=2;
			tmp*=2;
		}
		else if(num1%3==0 && num2%3==0)
		{
			num1/=3;
			num2/=3;
			tmp*=3;
		}
		else
		{
			break;
		}
	}
	
	printf("%d", tmp);
	
	return 0;
	
}
