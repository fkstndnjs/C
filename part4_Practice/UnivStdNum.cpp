#include <stdio.h>

#define STNUM(Y, S, P) Y##S##P

int main(void)
{
	printf("ÇÐ¹ø: %d \n", STNUM(10, 65, 175));
	printf("%d", STNUM(10, 65, 175)+1);

	return 0;
}
