#include <stdio.h>

int main(void)
{
	
	for(int i=0; i<10; i++)
	{
		static int num=0;
		int num2=0;
		
		printf("%d, %d\n", num, num2);
		
		num++;
		num2++;
	}
	
	return 0;
}
