#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	int i, j;
	
	fgets(str1, 20, stdin);
	fgets(str2, 20, stdin);
	
	for(i=0; i<20; i++)
	{
		if(str1[i]==' ')
			break;
	}
	
	for(j=0; j<20; j++)
	{
		if(str2[j]==' ')
			break;
	}
	
	if(i!=j)
		puts("�̸��� �ٸ��ϴ�");
	else
	{
		if(!strncmp(str1, str2, i))
			puts("�̸��� �����ϴ�");
		else
			puts("�̸��� �ٸ��ϴ�");
	}
	
	if(!strncmp(str1+i, str2+j, 2))
		puts("���̰� �����ϴ�");
	else
		puts("���̰� �ٸ��ϴ�");
	
	return 0;
}
