#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[30];
	
	scanf("%s", str);
	int z='0', n='9';
	int num=strlen(str);
	int total=0;
	
	for(int i=0; i<num; i++)
	{
		printf("%d, %c\n", str[i], str[i]);
		if(str[i]>=z && str[i]<=n)
			total+=str[i]-48;
	}
	
	printf("total: %d", total);
	
	return 0;
}
