#include <stdio.h>
#include <string.h>

void Func(char * str, int len)
{
	int num=0;
	int count;
	len--;
	
	while(num<=len)
	{
		if(str[num]==str[len])
			count=1;
		else
		{
			count=0;
			break;
		}
		
		num++;
		len--; 
	}
	
	if(count==1)
		printf("회문");
	else
		printf("회문이 아닙니다");
}
	
	
int main(void)
{
	char str[50];
	int len;
	
	scanf("%s", str);
	
	len=strlen(str);
	
	Func(str, len);
	
	return 0;
}
