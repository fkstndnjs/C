#include <stdio.h>

void Func(int * num1, int * num2, int * num3)
{
	int tmp=*num1;
	*num1=*num3;
	*num3=*num2;
	*num2=tmp;
}

int main()
{
	int num1=10, num2=20, num3=30;
	
	printf("%d, %d, %d\n", num1, num2, num3);
	
	Func(&num1, &num2, &num3);
	
	printf("%d, %d, %d", num1, num2, num3);
	
	return 0;
}
