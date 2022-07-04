#include <stdio.h>

#define ADD 1
#define MIN 0

int main(void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	#if ADD
		printf("%d", num1+num2);
	#endif
	
	#if MIN
		printf("%d", num-num2);
	#endif
	
	return 0;
}
