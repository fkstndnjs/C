#include <stdio.h>

char name[30];

char * ReadUserName(void)
{
	gets(name);
	return name;
}

int main(void)
{
	char * name1;
	char * name2;
	
	name1=ReadUserName();
	printf("%s\n", name1);
	
	name2=ReadUserName();
	printf("%s\n", name2);
	
	printf("%s\n", name1);
	
	return 0;
}
