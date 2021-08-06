#include <stdio.h>

int main(void)
{
	int second;
	int counth=0, countm=0;
	scanf("%d", &second);
	
	while(1)
	{
		if(second<3600)
			break;
		second-=3600;
		counth++;
	}
	
	while(1)
	{
		if(second<60)
			break;
		second-=60;
		countm++;
	}
	
	printf("h: %d, m: %d, s: %d", counth, countm, second);
	
	return 0;
}
