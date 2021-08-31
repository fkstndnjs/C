#include <stdio.h>
#define NUM 7

int main(void)
{
	#if NUM==7
		puts("7입니다.");
	#elif NUM==8
		puts("8입니다.");
	#else
		puts("7, 8이 아닙니다.");
	#endif
	
	return 0;
}
