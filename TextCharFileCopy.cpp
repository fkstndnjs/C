#include <stdio.h>

int main(void)
{
	FILE* src=fopen("data.txt", "rt");
	FILE* des=fopen("dst.txt", "wt");
	char str[20];
	
	//while((ch=fgetc(src))!=EOF)
	//	fputc(ch, des);
	
		fgets(str, sizeof(str), src);
		fputs(str, des);

	if(feof(src)!=0)
		puts("�Ϸ�");
	else
		puts("����");
	
	fclose(src);
	fclose(des);
	
	return 0;
}
