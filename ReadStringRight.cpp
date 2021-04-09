#include <stdio.h>
#include <stdlib.h>

char* ReadUserName(void)
{
	char* name = (char*)malloc(sizeof(char)*30);
	printf("¿Ã∏ß: ");
	gets(name);
	return name;
}

int main(void)
{
	char* name1;
	char* name2;
	name1=ReadUserName();
	printf("%s \n", name1);
	name2=ReadUserName();
	printf("%s \n", name2);
	
	printf("%s \n", name1);
	printf("%s \n", name2);
	
	free(name1);
	free(name2);
	return 0;
}
