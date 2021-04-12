#include <stdio.h>
#define STRING_JOB(A, B) #A "의 직업은 "#B"입니다."

int main(void)
{
	printf("%s \n", STRING_JOB(유석현, 나무꾼));
	
	return 0;
}
