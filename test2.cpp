#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int a;
} Ex;

void Pr(Ex* num)
{
	printf("%d", num->a);
}

int main(void)
{
	Ex* str=(Ex*)malloc(sizeof(Ex));
	
	str->a=10;
	
	printf("%d", str->a);
	
	return 0;
}
