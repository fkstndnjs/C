#include <stdio.h>

int main(void)
{
	int ch, i;
	FILE* fp=fopen("data.txt", "rt");
	
	for(i=0; i<2; i++)
	{
		ch=fgetc(fp);
		printf("%c, %d \n", ch, ch);
	}
	
	fclose(fp);
	return 0;
}
