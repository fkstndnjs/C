#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int total;
	
	scanf("%d", &total);
	
	for(num1=1; num1<10; num1++)
	{
		for(num2=1; num2<10; num2++)
		{
			for(num3=1; num3<10; num3++)
				if(num1*500+num2*700+num3*400==total)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", num1, num2, num3);
		}
	}
	
	return 0;
}
