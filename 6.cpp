#include <stdio.h>

int main(void)
{
	char str1[30];
	char str2[30];
	
	scanf("%s", str1);
	puts(str1);
	
	//fgets(str2, sizeof(str2), stdin);
	gets(str2);
	puts(str2);
	
	return 0;
}
