#include <stdio.h>
#include <string.h>

void ClrBuff(char* str) //�迭�� �� ä���� �Է��� �޴µ� �Է��� �� �迭�� ���̸� �ʰ��� ��츦 ����ϴ� �Լ� 
{
	while(getchar()!='\n'); //enter�� ���� ������ �Է� ���ۿ� ����� ���� �о�鿩 �Է� ���۸� �ʱ�ȭ�� 
}

void RmvEnt(char* str) //�迭�� �� ä���� ���� ��쿡 �������� �ԷµǴ� enter������ �迭�� ���ԵǹǷ� �� enter���� �迭���� ����� �Լ� 
{
	int num=strlen(str);
	
	str[num-1]=0; //strlen�Լ��� �̿��ϸ� �� ���� �������� ���̰� ��ȯ, ������ �迭�� �ε����� 0���� �����̹Ƿ� -1�� ����� enter���� ����Ǿ� �ִ� �ε����� 
}

int main(void)
{
	char str1[5];
	char str2[5];
	
	printf("4�ڸ��� ���ڿ� �Է�(ClrBuff�Լ� ����): ");
	
	fgets(str1, 5, stdin); //�� ���ڸ� ������ �ִ� 4�ڸ��� ���ڿ��� �Է¹��� 

	ClrBuff(str1); //���� ù ��° �Է¿��� 4�ڸ� �̻��� ���ڿ��� �Է¹޾��� ��� fgets�Լ����� �о���� 4���� ������ �������� ������ 
	
	printf("str1: %s\n\n", str1); //str1 ���ڿ� ��� 
	
	printf("3�ڸ��� ���ڿ� �Է�(RmvEnt�Լ� ����): ");
	
	fgets(str2, 5, stdin); //3�ڸ��� ���ڿ��� �Է�(enter�� ������ ����) 
	
	printf("str2�� ����: %d\n", strlen(str2));
	puts(str2);
	printf("-------\n"); //enterȮ�ο� 
	
	RmvEnt(str2); //enter���� ����� �迭 �ε����� �� enter�� ���� 
	
	printf("str2�� ����: %d\n", strlen(str2));
	puts(str2);
	printf("-------"); //enterȮ�ο�
		
	return 0;
}
