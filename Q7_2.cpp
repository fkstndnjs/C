#include <stdio.h>

int main(void)
{
	int num;
	int two=1;
	int count=0;
	
	scanf("%d", &num);
	
	while(1)
	{
		two*=2;
		if(two>num)
			break;
		count++;
	}
	
	printf("k´Â %d", count);
	
	return 0;
}

