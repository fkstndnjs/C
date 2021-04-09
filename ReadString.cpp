#include <stdio.h>

char* Read(void)
{
	char name[30];
	printf("What: ");
	gets(name);
	return name;
}

int main(void)
{
	char* name1;
	
	for(int i=0; i<5; i++)
	{
		name1=Read();
		printf("%p\n", name1);
	}
	
	return 0;
}
