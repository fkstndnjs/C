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

	puts("도서 정보 입력"); 

	for(int i=0; i<3; i++)
	{
		printf("저자: "); 
		scanf("%s", b[i].name);
		EmtBuf();
		printf("제목: "); 
		fgets(b[i].title, 30, stdin);
		RmvEnt(b[i].title);
		//gets(b[i].title);
		printf("페이지 수: "); 
		scanf("%d", &(b[i].page));
	}
	
	puts("도서 정보 출력"); 
	printf("\n");
	for(int i=0; i<3; i++)
	{
		printf("book %d\n", i+1);
		printf("저자: %s\n", b[i].name);
		printf("제목: %s\n", b[i].title);
		printf("페이지 수: %d\n", b[i].page);
	}
	
	return 0;
}
	
