#include <stdio.h>

int main()
{
	char str[50];
	int max;
	
	scanf("%s", str);
	
	for(int i=0; i<50; i++)
	{
		if(str[i]=='\0')
			break;
			
		max = max>str[i] ? max : str[i];
	}
	
	printf("%c", max);
	
	return 0;
}
