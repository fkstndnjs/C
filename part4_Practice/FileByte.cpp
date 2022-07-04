#include <stdio.h>

long Show(FILE* fp)
{
	long off;
	long len;
	
	off=ftell(fp);
	
	fseek(fp, 0, SEEK_END);
	len=ftell(fp);
	
	fseek(fp, off, SEEK_SET);
	
	return len;
}

int main(void)
{
	FILE* fp=fopen("ABC.txt", "rt");
	
	putchar(fgetc(fp));
	
	printf("\n%ld\n", Show(fp));
	
	putchar(fgetc(fp));
	
	printf("\n%ld", Show(fp));
		
	return 0;
}
