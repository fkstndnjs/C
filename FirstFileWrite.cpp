#include <stdio.h>

int main(void)
{
	FILE* fp=fopen("data.txt", "wt");
	if(fp==NULL)
	{
		puts("���Ͽ��½���");
		
		return -1;
	}
	
	fputc('A', fp);
	
	fputc('B', fp);
	
	fclose(fp);
	
	return 0;
}
