#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ClrBuff(char* str) //�迭�� �� ä���� �Է��� �޴µ� �Է��� �� �迭�� ���̸� �ʰ��� ��츦 ����ϴ� �Լ�
{
	while(getchar()!='\n'); //enter�� ���� ������ �Է� ���ۿ� ����� ���� �о�鿩 �Է� ���۸� �ʱ�ȭ�� 
}

void RmvEnt(char* str) //�迭�� �� ä���� ���� ��쿡 �������� �ԷµǴ� enter������ �迭�� ���ԵǹǷ� �� enter���� �迭���� ����� �Լ� 
{
	int num=strlen(str);
	
	str[num-1]=0; //strlen�Լ��� �̿��ϸ� �� ���� �������� ���̰� ��ȯ��, ���� �� ������ 1�� ���� enter���� �ִ� �迭�� �ε������̹Ƿ� �ű⿡ �ι��ڸ� ���� 
}

int main(void)
{
	char str1[10];
	char str2[10];
	
	fgets(str1, 10, stdin);
	ClrBuff(str1);
	
	fgets(str2, 10, stdin);
	RmvEnt(str2);
	
	puts(str1);
	puts(str2);
	
	int cmp=!strncmp(str2, str1+3, 3);
	
	puts(str2);
	
	if(cmp==1)
		puts("�����ϴ�"); 
		
	printf("%d", atoi(&str1[2]));
	return 0;
}
