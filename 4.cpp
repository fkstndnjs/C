#include <stdio.h>

int main(void)
{
	FILE * src = fopen("src.txt", "rt");
	FILE * dst = fopen("dst2.txt", "wt");
	char str[50];
	
	while(fgets(str, sizeof(str), src)!=NULL)
		fputs(str, dst);
		
	if(feof(src)!=0)
		puts("파일복사완료");
		
	fclose(src);
	fclose(dst);
	
	return 0;
}
