#include <stdio.h>

#define THREESUM(A, B, C) ((A)+(B)+(C))
#define THREEMUL(A, B, C) ((A)*(B)*(C))

int main(void)
{
	printf("%d, %d", THREESUM(5, 4, 10), THREEMUL(3, 6, 9));
	
	return 0;
}
