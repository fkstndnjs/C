#include <stdio.h>

int main(void)
{
	FILE* fp=fopen("text.txt", "rt");
	int ch;
	
	printf("%d\n\n", ftell(fp));
	
	ch=fgetc(fp);
	
	printf("%c\n", ch);
	
	printf("%d\n\n", ftell(fp));
	
	ch=fgetc(fp);
	
	printf("%c\n", ch);
	
	printf("%d\n\n", ftell(fp));
	
	ch=fgetc(fp);
	
	printf("%c\n", ch);
	
	printf("%d\n\n", ftell(fp));
	
	ch=fgetc(fp);
	
	printf("%c\n", ch);
	
	printf("%d\n\n", ftell(fp));
	
	fclose(fp);
	
	return 0;
}
