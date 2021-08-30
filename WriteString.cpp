#include <stdio.h>

int main(void)
{
	char * str = "Simple String";
	
	puts(str);
	puts("So Simple String");
	
	fputs(str, stdout);
	fputs("So Simple String", stdout);
	
	return 0;
}
