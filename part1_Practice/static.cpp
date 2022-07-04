#include <stdio.h>

int main(void)
{
	int num3=0;
	int i=0;
	while(i<10)
	{
		static int num=0;
		int num2=0;
		
		printf("%d, %d, %d\n", num, num2, num3);
		
		num++;
		num2++;
		num3++;
		i++;
	}
	
	return 0;
}
