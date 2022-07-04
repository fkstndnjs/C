#include <stdio.h>

int main()
{
	int num;
	int h=0, m=0;
	
	scanf("%d", &num);

	while(1)
	{
		if(num<3600)
			break;
		num-=3600;
		h++;
	}
	while(1)
	{
		if(num<60)
			break;
		num-=60;
		m++;
	}
	
	printf("h: %d, m: %d, s: %d", h, m, num);
	
	return 0;
}
