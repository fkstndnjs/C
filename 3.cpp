#include <stdio.h>

int main(void)
{
	FILE * src = fopen("src.txt", "rt");
	FILE * dst = fopen("dst.txt", "wt");
	int ch;
	
	while((ch=fgetc(src))!=EOF)
		fputc(ch, dst);
	
	if(feof(src)!=0)
		puts("복사완료");
	
	fclose(src);
	fclose(dst);
	
	return 0;
}
