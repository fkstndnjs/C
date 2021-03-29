#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];
	
	fgets(str1, 20, stdin);
	fgets(str2, 20, stdin);
	
	int num=strlen(str1);
	
	strncpy(str3, str1, num-1);
	strcat(str3, str2);
	fputs(str3, stdout);
	
	return 0;
}
	
	
