#include <stdio.h>

int main()
{
	int num1, num2;
	int temp;
	
	scanf("%d %d", &num1, &num2);
	
	if(num1<num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	
	printf("%d", num1-num2);
	
	return 0;
}
