#include <stdio.h>

int num=0;

void Increment(void)
{
	num++;
}

int GetNum(void)
{
	return num;
}

int main(void)
{
	printf("%d", GetNum());
	Increment();
	printf("%d", GetNum());

	return 0;
}
