#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int win, draw, lose;

void Show(int num)
{
		switch(num)
		{
			case 0:
				printf("����\n");
				break;
			case 1:
				printf("����\n"); 
				break;
			case 2: 
				printf("��\n");
				break;
		}
		
}

void Game(int p, int c)
{
	if(p==0)
	{
		switch(c)
		{
			case 0:
				printf("�����ϴ�.\n");
				draw++;
				break;
			case 1:
				printf("�����ϴ�.\n"); 
				lose++;
				break;
			case 2: 
				printf("�̰���ϴ�.\n");
				win++;
				break;
		}
	}
	else if(p==1)
	{
		switch(c)
		{
			case 0:
				printf("�̰���ϴ�.\n");
				win++;
				break;
			case 1:
				printf("�����ϴ�.\n");
				draw++;
				break;
			case 2: 
				printf("�����ϴ�.\n");
				lose++;
				break;
		}
	}
	else
	{
		switch(c)
		{
			case 0:
				printf("�����ϴ�.\n");
				lose++;
				break;
			case 1:
				printf("�̰���ϴ�.\n");
				win++;
				break;
			case 2: 
				printf("�����ϴ�.\n");
				draw++;
				break;
		}
	}
}

int main(void)
{
	int player;
	int com;
	
	srand((int)time(NULL));
	
	while(1)
	{
		scanf("%d", &player);
		com=rand()%3;
		
		printf("�����: ");
		Show(player);
		 
		printf("��ǻ��: ");
		Show(com);
		  
		Game(player, com);
		
		if(lose>0)
			break;
	}
	
	printf("���Ӱ�� %d�� %d��", win, draw);
	 
	return 0;
}
