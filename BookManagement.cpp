#include <stdio.h>
#include <string.h>

void RmvEnt(char* arr)
{
	int num=strlen(arr);
	arr[num-1]=0;
}

void EmtBuf(void)
{
	while(getchar()!='\n');
}

typedef struct
{
	char title[30];
	char name[10];
	int page;
} Book;

int main(void)
{
	Book b[3];

	puts("���� ���� �Է�"); 

	for(int i=0; i<3; i++)
	{
		printf("����: "); 
		scanf("%s", b[i].name);
		EmtBuf();
		printf("����: "); 
		fgets(b[i].title, 30, stdin);
		RmvEnt(b[i].title);
		//gets(b[i].title);
		printf("������ ��: "); 
		scanf("%d", &(b[i].page));
	}
	
	puts("���� ���� ���"); 
	printf("\n");
	for(int i=0; i<3; i++)
	{
		printf("book %d\n", i+1);
		printf("����: %s\n", b[i].name);
		printf("����: %s\n", b[i].title);
		printf("������ ��: %d\n", b[i].page);
	}
	
	return 0;
}
	
