#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
};

int main(void)
{
	struct person man;
	
	//man.name="������"
	
	strcpy(man.name, "������");
	
	//strcpy�� ���ڿ��� �迭�� �ִ� ����
	//���ڿ��� ������ �޸𸮰����� ����Ǿ� �� �ּҰ��� ��ȯ
	//man1.name�� �ּҰ��� ���� ���ϴ� ��� ������ ������ ����
	//���� man1.name="���ڿ�"�� ������ ����
	//strcpy(char* ~, char* ~)�̹Ƿ� strcpy(man1.name, ���ڿ�)�� ���ڿ��� �迭�� ���� 
	
	puts(man.name);
	
	return 0;
}
