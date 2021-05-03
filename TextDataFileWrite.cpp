#include <stdio.h>

int main(void)
{
	FILE * src = fopen("text.txt", "rt");
	FILE * des = fopen("test.txt", "wt");
	char str[20];
	
	while(fgets(str, sizeof(str), src)!=NULL)
		fputs(str, des);
	
	if(feof(src)!=0)
		puts("파일 복사 완료");
	
	fclose(src);
	fclose(des); 
	
}
