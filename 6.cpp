#include <stdio.h>

int main(void)
{
	int num=20;
	int num2=30;
	int * ptr=&num;
	*ptr=30;
	ptr=&num2;
	
	return 0;
}
