#include <stdio.h>

int main(void)
{
	FILE* fp;
	int ch;
	
	fp=fopen("text.txt", "wt");
	
	fputs("ABC", fp);
	
	fclose(fp);
	
	return 0;
}
