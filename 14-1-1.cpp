#include <stdio.h>

int SBV(int num)
{
	return num*num;
}

void SBR(int* num)
{
	*num*=*num;
}

int main(void)
{
	int num;
	
	scanf("%d", &num);
	
	printf("%d\n", SBV(num));
	
	SBR(&num);
	
	printf("%d\n", num);
	
	return 0;
}
