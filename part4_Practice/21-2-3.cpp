#include <stdio.h>
#include <string.h>

void Rmv(char* str)
{
	str[strlen(str)-1]=0;
}

int main(void)
{
	char str1[50];
	char str2[50];
	int len1, len2;
	int i, j;
	int tmp;
	
	fgets(str1, sizeof(str1), stdin);
	Rmv(str1);
	
	fgets(str2, sizeof(str2), stdin);
	Rmv(str2);
	
	len1=strlen(str1);
	len2=strlen(str2);
	
	for(i=0; i<len1; i++)
		if(str1[i]==' ')
			break;
	
	for(j=0; j<len2; j++)
		if(str2[j]==' ')
			break;

	if(i<j)
		tmp=j;
		
	if(!strncmp(str1, str2, j))
		puts("�̸��� �����մϴ�.");
	else
		puts("�̸��� �ٸ��ϴ�.");
	
	if(!strcmp(str1+i, str2+j))
		puts("���̰� �����մϴ�.");
	else
		puts("���̰� �ٸ��ϴ�.");
	
	return 0;
}
