#include <stdio.h>
#define NUM 7

int main(void)
{
	#if NUM==7
		puts("7�Դϴ�.");
	#elif NUM==8
		puts("8�Դϴ�.");
	#else
		puts("7, 8�� �ƴմϴ�.");
	#endif
	
	return 0;
}
