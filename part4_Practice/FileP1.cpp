#include <stdio.h>

int main(void)
{
	FILE* my=fopen("mystory.txt", "wt");
	
	fputs("#�̸�: ������\n", my);
	fputs("#�ֹι�ȣ: 981016\n", my);
	fputs("#��ȭ��ȣ: 010\n", my);
	
	fclose(my);
	
	return 0;
}
