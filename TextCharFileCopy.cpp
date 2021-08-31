#include <stdio.h>

int main(void)
{
	FILE * src=fopen("src.txt", "rt");
	FILE * dst=fopen("dst.txt", "wt");
	int ch;
	
	if(src==NULL || dst==NULL){
		puts("���Ͽ��� ����!");
		return -1;
	}
	
	while((ch=fgetc(src))!=EOF)
		fputc(ch, dst);
		
	if(feof(src)!=0)
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");
		
	fclose(src);
	fclose(dst);
	
	return 0;
}
