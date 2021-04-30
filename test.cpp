#include <stdio.h>
#include <stdlib.h>

void ClearBuffer(void)
{
	while(getchar()!='\n');
}

int main(void)
{

	char str1[20]="12345w123";
	char str2[20];
	char str3[5];
	
	printf("%d", atoi(str1));
	
	return 0;
	
}
