#include <stdio.h>
#include <string.h>

void Rmv(char* str)
{
	str[strlen(str)-1]=0;
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[20];
	
	fgets(str1, sizeof(str1), stdin);
	Rmv(str1);
	
	fgets(str2, sizeof(str2), stdin);
	Rmv(str2);
	
	strcpy(str3, str1);
	strcat(str3, str2);
	
	fputs(str3, stdout);
	
	return 0;
}
