#include <stdio.h>

int main(void)
{
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("des.txt", "wt");
	char str[20];
	
	while(fgets(str, sizeof(str), src)!=NULL)
		fputs(str, des);
	
	if(feof(src)!=0)
		puts("파일 복사 완료");
	
	fclose(src);
	fclose(des); 
	
    return 0;
}
