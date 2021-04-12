#include <stdio.h>

#define MAX(A, B) ((A)>(B) ? (A) : (B))

int main(void)
{
	printf("%d", MAX(4, 5));
	
	return 0;
}
