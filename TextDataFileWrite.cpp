#include <stdio.h>

int main(void)
{
	FILE * src = fopen("text.txt", "rt");
	FILE * des = fopen("test.txt", "wt");
	char str[20];
	
	while(fgets(str, sizeof(str), src)!=NULL)
		fputs(str, des);
	
	if(feof(src)!=0)
		puts("���� ���� �Ϸ�");
	
	fclose(src);
	fclose(des); 
	
}
