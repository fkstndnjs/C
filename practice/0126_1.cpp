#include <stdio.h>

int Func1(int num1, int num2, int num3)
{
	int max;
	max=num1<num2 ? num2 : num1;
	max=max<num3 ? num3 : max;
}

int Func2(int num1, int num2, int num3)
{
	int max;
	max=num1>num2 ? num2 : num1;
	max=max>num3 ? num3 : max;
}

int main(void)
{
	int num1, num2, num3;
	
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("%d, %d", Func1(num1, num2, num3), Func2(num1, num2, num3));
	
	return 0;
}
