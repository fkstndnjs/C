#include <stdio.h>

int main(void)
{
	FILE * src=fopen("src.txt", "rt");
	FILE * dst=fopen("dst.txt", "wt");
	int ch;
	
	if(src==NULL || dst==NULL){
		puts("파일오픈 실패!");
		return -1;
	}
	
	while((ch=fgetc(src))!=EOF)
		fputc(ch, dst);
		
	if(feof(src)!=0)
		puts("파일복사 완료!");
	else
		puts("파일복사 실패!");
		
	fclose(src);
	fclose(dst);
	
	return 0;
}
