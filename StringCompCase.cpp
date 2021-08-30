#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	
	scanf("%s", str1);
	
	scanf("%s", str2);
	
	if(!strcmp(str1, str2))
	{
		puts("동일합니다.");
	}
	else
	{
		puts("동일하지 않습니다.");
		
		if(!strncmp(str1, str2, 3))
			puts("그러나 앞 세 글자는 동일합니다.");
	}
	
	return 0;
}

