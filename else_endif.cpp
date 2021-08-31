#include <stdio.h>
#define NUM 5

int main(void)
{
	#if NUM==5
		puts("매크로 상수 NUM은 5입니다.");
	#else
		puts("매크로 상수 NUM은 5가 아닙니다.");
	#endif
	
	return 0;
}
