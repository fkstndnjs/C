#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[30]={0};
	char str2[30]={0};
	int i, j;
	
	gets(str1);
	gets(str2);
	int num1, num2;
	num1=strlen(str1);
	num2=strlen(str2);
	
	for(i=0; i<num1; i++)
	{
		if(str1[i]==' ')
			break;
	}
	
	for(j=0; j<num2; j++)
	{
		if(str2[j]==' ')
			break;
	}
	
	if(i==j)
	{
		if(!strncmp(str2, str1, i))
			puts("�̸��� �����ϴ�.");
		else
			puts("�̸��� �ٸ��ϴ�.");
	}
	else
		puts("�̸��� �ٸ��ϴ�.");

	if(!strcmp(str2+j, str1+i))
		puts("���̰� �����ϴ�");
	else
		puts("���̰� �ٸ��ϴ�");
		 
	return 0;
}
