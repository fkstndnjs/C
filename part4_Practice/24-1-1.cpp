#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("mystory.txt", "wt");
	
	char str1[30];
	char str2[30];
	char str3[30];
	
	printf("#�̸�: "); 
	fputs("#�̸�: ", fp); 
	scanf("%s", str1);
	fputs(str1, fp);
	fputs("\n", fp);
	
	printf("#�ֹι�ȣ: ");
	fputs("#�ֹι�ȣ: ", fp);
	scanf("%s", str2);
	fputs(str2, fp);
	fputs("\n", fp);
		
	printf("#��ȭ��ȣ: ");
	fputs("#��ȭ��ȣ: ", fp);
	scanf("%s", str3);
	fputs(str3, fp);
	fputs("\n", fp);
	
	fclose(fp);
	
	return 0;
}
