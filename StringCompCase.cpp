#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	
	scanf("%s", str1);
	
	scanf("%s", str2);
	
	if(!strcmp(str1, str2))
	{
		puts("�����մϴ�.");
	}
	else
	{
		puts("�������� �ʽ��ϴ�.");
		
		if(!strncmp(str1, str2, 3))
			puts("�׷��� �� �� ���ڴ� �����մϴ�.");
	}
	
	return 0;
}

