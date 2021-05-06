#include <stdio.h>

char * ReadUserName(void)
{
	char name[30];
	gets(name);
	return name;
}

int main(void)
{
	char * name1;
	char * name2;
	
	name1=ReadUserName();
	printf("%s", name1);
	
	name2=ReadUserName();
	printf("%s", name2);
	
	return 0;
}
