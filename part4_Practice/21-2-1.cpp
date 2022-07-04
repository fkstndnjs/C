#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	int len;
	int sum=0;
	
	scanf("%s", str);
	
	len=strlen(str);
	
	for(int i=0; i<len; i++)
	{
		if('0'<=str[i] && str[i]<='9')
		{
			sum+=str[i]-'0';
		}
	}
			
	printf("total: %d", sum);
	
	return 0;
}
