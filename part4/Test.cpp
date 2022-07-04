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
	char* str=(char*)malloc(5);
	
	scanf("%s", str);
	
	printf("%s", str);
	
	return 0;
}
