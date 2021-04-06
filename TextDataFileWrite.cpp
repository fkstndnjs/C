#include <stdio.h>

int main(void)
{
	FILE* fp=fopen("simple.txt", "wt");
	
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
	return 0;
}
