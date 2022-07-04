#include <stdio.h>
#include <stdlib.h>

char* Func(void)
{
	char* ptr = (char*)malloc(sizeof(char)*30);
	gets(ptr);
	return ptr;
}

int main(void)
{
	char * ptr1;
	char * ptr2;
	
	ptr1=Func();
	printf("%s", ptr1);
	
	ptr2=Func();
	printf("%s", ptr2);
	
	free(ptr1);
	free(ptr2);
	
	return 0;
}
