#include <stdio.h>

int main(void)
{
	char str[50];
	char max;
	scanf("%s", str);
	
	max=str[0];
	
	for(int i=0; i<50; i++)
	{
		if(str[i]==0)
			break;
		else
			if(max<str[i])
				max=str[i];
	}
	
	printf("%c", max);
	
	return 0;
}
