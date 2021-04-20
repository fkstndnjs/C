#include <stdio.h>

int Func(int num)
{
	if(num==0)
		return 1;
	else
		return 2*Func(num-1);
}

int main(void)
{
	int num;
	
	scanf("%d", &num);
	
	printf("%d", Func(num));
	return 0;
}
