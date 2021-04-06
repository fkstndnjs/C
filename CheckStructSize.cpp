#include <stdio.h>

typedef struct
{
	int x;
	int y;
} Ex;

int main(void)
{
	Ex a;
	
	printf("%d, %d", sizeof(Ex), sizeof(a));
	
	return 0;
}
