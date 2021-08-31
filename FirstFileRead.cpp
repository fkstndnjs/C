#include <stdio.h>

int main(void)
{
	int ch, i;

	FILE * fp = fopen("data.txt", "rt");
	
	if(fp==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	
	for(int i=0; i<3; i++)
	{
	   ch=fgetc(fp);
	   putchar(ch);
	}
	
	fclose(fp);
	
	return 0;
}
