#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("mystory.txt", "rt");
	
	char str[50];
	
	while(fgets(str, sizeof(str), fp)!=NULL)
		fputs(str, stdout);
		
	fclose(fp);
	
	return 0;
}
