#include <stdio.h>

int main(void)
{
	FILE* fp=fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);
	
	fp=fopen("text.txt", "rt");
	
	printf("%d\n", ftell(fp));
	
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));
	printf("\n%d\n", ftell(fp));
	
	fseek(fp, 1, SEEK_SET);
	putchar(fgetc(fp));
	printf("\n%d\n", ftell(fp));
	
	fseek(fp, 0, SEEK_CUR);
	putchar(fgetc(fp));
		fseek(fp, 0, SEEK_CUR);
	putchar(fgetc(fp));
		fseek(fp, 0, SEEK_CUR);
	putchar(fgetc(fp));
		fseek(fp, 0, SEEK_CUR);
	putchar(fgetc(fp));
		fseek(fp, 0, SEEK_CUR);
	putchar(fgetc(fp));
	printf("\n%d\n", ftell(fp));
	fclose(fp);
	return 0;
}
