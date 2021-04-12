#include <stdio.h>

#define PI 3.141592

double Ex(int num)
{
	return num*num*PI;
}

int main(void)
{
	
	printf("%f", Ex(3));
	
	return 0;
}
