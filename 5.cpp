#include <stdio.h>

int main(void)
{
	char str[30]={"i am a boy"};
	
	char * ptr = str;
	
	printf("%c, %c", str[0], ptr[0]);
	
	return 0;
}
