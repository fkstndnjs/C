#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[30]={"hi"};
	char str2[30];
	puts(str1);
	
	strcpy(str2, str1);
	
	puts(str2);
	return 0;
}
