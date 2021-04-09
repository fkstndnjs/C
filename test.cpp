#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[30]={"hello"};
	char str2[30];
	printf("%s", str);
	
	strcat(str2, str, sizeof(str2));
	
	printf("%s", str2);
	
	return 0;
}
