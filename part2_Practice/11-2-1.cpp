#include <stdio.h>

int main(void)
{
	char str[50];
	int i;
	
	scanf("%s", str);

	for(i=0; i<50; i++)
	{
		if(str[i]==0)
			break;
	}
	
	printf("%d", i);
	
	return 0;
}
