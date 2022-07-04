#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ShowResult(int num)
{
	switch(num)
	{
		case 1:
			printf("����");
			break;
		case 2:
			printf("����");
			break;
		case 3:
			printf("��");
			break;
	}
}

void Show(int num, int com)
{
	printf("num: %d, com: %d\n", num, com); 
	printf("����� ");

	ShowResult(num);
		
	printf(" ����, ��ǻ�ʹ� ");
	
	ShowResult(com);
	
	printf(" ����, ");
}

void Result(int num, int com, int* win, int* lose, int* draw)
{
	if(num==1)
	{
		if(com==1)
		{
			printf("�����ϴ�.\n");
			(*draw)++;
		}
		else if(com==2)
		{
			printf("�̰���ϴ�.\n");
			(*win)++;
		}
		else
		{
			printf("�����ϴ�.\n");
			(*lose)++;
		}
	}
	else if(num==2)
	{
		if(com==1)
		{
			printf("�����ϴ�.\n");
			(*lose)++;
		}
		else if(com==2)
		{
			printf("�����ϴ�.\n");
			(*draw)++;
		}
		else
		{
			printf("�̰���ϴ�.\n");
			(*win)++;
		}
	}
	else
	{
		if(com==1)
		{
			printf("�̰���ϴ�.\n");
			(*win)++;
		}
		else if(com==2)
		{
			printf("�����ϴ�.\n");
			(*lose)++;
		}
		else
		{
			printf("�����ϴ�.\n");
			(*draw)++;
		}
	}
}

int main(void)
{
	int num;
	int com;
	int win=0, lose=0, draw=0;
	srand((int)time(NULL));
	
	while(1)
	{
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &num);
		com=rand()%3+1;

		Show(num, com);
		Result(num, com, &win, &lose, &draw);

		if(lose==1)
			break;
	}
	
	printf("������ ���: %d��, %d��", win, draw);
	 
	return 0;
}
