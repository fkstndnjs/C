#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* Alloc(int len)
{
	char* name=(char*)malloc(sizeof(char)*len); //�����Ҵ��� ���� �� ������ �޸� �Ҵ� 
	return name;
}

void SwapAndShow(char* name, int len)
{
	char temp[len]={0}; //name�� �ִ� ���ڿ��� �Ųٷ� �����ϱ� ���� �迭, 0���� �ʱ�ȭ ���ϸ� �ִٰ� strcat�� �� ��� ó������ �𸣰� �����Ⱚ ����� 
	int index[10]={0}; //������ �迭 
	int j=0; //�ε��� 
	int nameLen; //name�� ���� 
	
	for(int i=0; i<len; i++) //���ڿ��� ���� �ε����� ã�Ƽ� index�迭�� ���� 
	{
		if(name[i]==' ') //name[i]�� �����̸� index�迭�� i�� ���� 
		{
			index[j]=i;
			j++; 
		}
	}
	
	nameLen=strlen(name); //name�� ���� ���� 
	
	printf("name�� ����: %d\n", nameLen);
	
	index[j]=nameLen; //name�� ����=name���ڿ��� �� ���� �ε����̹Ƿ� �ƹ��͵� ������ �װ� �����̶�� ġ�� index�迭�� ���� nameLen�� ���� 
	 
	printf("index[10]: ");
	
	for(int i=0; i<10; i++) //index�迭 ��� 
	{		
		printf("%d ", index[i]);
	}
	
	printf("\nj�� ��: %d\n", j); //j�� �� ��� 

	for(int i=0; i<j; i++)
	{
		strncat(temp, name+index[j-1-i]+1, index[j-i]-index[j-1-i]-1); //temp�� name���ڿ��� ������ �������� index�迭�� ����Ǿ� �ִ� �� �� ���� ���̸�ŭ strcat 
		//�� ó������ nameLen(name���ڿ��� ����)�� ����Ǿ� �ִ� ���� ������ ������ �ܾ strcat�ؾߵǱ� ������ index[j-1]�� �������� �ڵ� �ۼ� 
		temp[strlen(temp)]=' '; //���ڿ��� ������ �����ϰ� strcat�� �� ���� ����(�� ó�� ���ڿ��� strcat�� ��, name���ڿ��� ������ ������ �����Ƿ� �̷��� �ؾߵ�) 
	}
	
	strncat(temp, name, index[0]); //������ �ܾ� strcat 
	
	printf("%s\n", temp); //�Ųٷ� �� ���ڿ� ��� 
}

int main(void)
{
	char* name; //���ڿ��� ������ ���� 
	int len; //�޸� ũ�⸦ ������ ����
	
	printf("�Ҵ��� �޸� ũ�⸦ �Է��ϼ���: ");
	scanf("%d", &len); //�޸� ũ�� �Է� ���� 
	getchar(); //�Է� ���ۿ��� "����"���� 
	
	name=Alloc(len); //�Է��� �޸� ũ�⸸ŭ �޸� �Ҵ� 
	
	printf("���ڿ��� �Է��ϼ���: ");
	gets(name); //���ڿ� �Է� ���� 
	
	SwapAndShow(name, len); //���ڿ� �Ųٷ� ����ϴ� �Լ� 
	
	return 0;
}
	
	
