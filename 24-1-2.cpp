#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("mystory.txt", "at");
	
	char str1[30];
	char str2[30];
	
	printf("#Áñ°Ü¸Ô´Â À½½Ä: "); 
	fputs("#Áñ°Ü¸Ô´Â À½½Ä: ", fp); 
	scanf("%s", str1);
	fputs(str1, fp);
	fputs("\n", fp);
	
	printf("#Ãë¹Ì: ");
	fputs("#Ãë¹Ì: ", fp);
	scanf("%s", str2);
	fputs(str2, fp);
	fputs("\n", fp);
	
	fclose(fp);
	
	return 0;
}
