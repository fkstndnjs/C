#include <stdio.h>

typedef struct
{
	char name[30];
	char title[30];
	int page;
} Book;

void ClrBuff(void)
{
	while(getchar()!='\n');
}

int main(void)
{
	Book book[3];
	
	for(int i=0; i<3; i++)
	{
		printf("����: ");
		gets(book[i].name);
		printf("����: ");
		gets(book[i].title);
		printf("������ ��: ");
		scanf("%d", &book[i].page);
		ClrBuff();
	}
	
	puts("���� ���� ���");
	
	for(int i=0; i<3; i++)
	{
		printf("book %d\n", i+1);
		printf("����: %s\n", book[i].name);
		printf("����: %s\n", book[i].title);
		printf("������ ��: %d\n\n", book[i].page);
	}
	
	return 0;
}
