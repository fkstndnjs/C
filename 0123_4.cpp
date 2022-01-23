#include <stdio.h>

int main(void)
{
	int num;
	int i=9;
	
	scanf("%d", &num);
	
	while(i>0)
	{
		printf("%d X %d = %d\n", num, i, num*i);
		i--;
	}
	
	return 0;
}
