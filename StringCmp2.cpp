#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RmvEnt(char* str)//�迭�� enter���� ���ܽ�Ű�� �Լ� 
{
	int num=strlen(str);
	str[num-1]=0;
}

int main(void)
{
	char str1[20]={0}; //ù ��° ����� ���� 
	char str2[20]={0}; //�� ��° ����� ���� 
	int i=0;
	int j=0;
	
	fgets(str1, 20, stdin);
	RmvEnt(str1);
	
	fgets(str2, 20, stdin);
	RmvEnt(str2);
	
	for(i; i<20; i++) //str1�� ���� ���ڰ� ����� �ε����� ã�� �ݺ��� 
	{
		if(str1[i]==' ')
			break;	
	}

	for(j; j<20; j++) //str2�� ���� ���ڰ� ����� �ε����� ã�� �ݺ���
	{
		if(str2[j]==' ')
			break;	
	}
	
	if(i!=j) //���� ���ڰ� ����� ��ġ�� �ٸ��� ���ڸ� ������ ���̰� �ٸ��Ƿ� ������ �̸��� �ٸ��ٴ� �� 
		puts("�̸��� �ٸ��ϴ�");
	else
	{
		if(!strncmp(str1, str2, i-1)) //���� ���� ������ str1�� str2�� �� 
			puts("�̸��� �����ϴ�");
		else
			puts("�̸��� �ٸ��ϴ�");
	}
	
	i+=1; //���� ���� ���� ��ġ=���̰� ����Ǿ��ִ� �ε��� 
	j+=1;
	
	if(!strncmp(str1+i, str2+j, 2)) //���̰� ����Ǿ� �ִ� �ε������� ���̰� 2�ڸ��̹Ƿ� 2�� �� 
		puts("���̰� �����ϴ�");
	else
		puts("���̰� �ٸ��ϴ�"); 
	
	return 0;
}
