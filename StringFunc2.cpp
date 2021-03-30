#include <stdio.h>
#include <string.h>

void RmvEnt(char str[])
{
	int num=strlen(str);
	str[num-1]=0;
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];
	
	fgets(str1, 20, stdin);
	RmvEnt(str1);
	
	fgets(str2, 20, stdin);
	RmvEnt(str2);
	
	strcpy(str3, str1);
	
	puts(str3);
	
	strcat(str3, str2);
	
	puts(str3);

	return 0;
}
