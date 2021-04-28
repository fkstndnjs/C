#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int win, draw, lose;

void Show(int num)
{
		switch(num)
		{
			case 0:
				printf("가위\n");
				break;
			case 1:
				printf("바위\n"); 
				break;
			case 2: 
				printf("보\n");
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
				printf("비겼습니다.\n");
				draw++;
				break;
			case 1:
				printf("졌습니다.\n"); 
				lose++;
				break;
			case 2: 
				printf("이겼습니다.\n");
				win++;
				break;
		}
	}
	else if(p==1)
	{
		switch(c)
		{
			case 0:
				printf("이겼습니다.\n");
				win++;
				break;
			case 1:
				printf("비겼습니다.\n");
				draw++;
				break;
			case 2: 
				printf("졌습니다.\n");
				lose++;
				break;
		}
	}
	else
	{
		switch(c)
		{
			case 0:
				printf("졌습니다.\n");
				lose++;
				break;
			case 1:
				printf("이겼습니다.\n");
				win++;
				break;
			case 2: 
				printf("비겼습니다.\n");
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
		
		printf("사용자: ");
		Show(player);
		 
		printf("컴퓨터: ");
		Show(com);
		  
		Game(player, com);
		
		if(lose>0)
			break;
	}
	
	printf("게임결과 %d승 %d무", win, draw);
	 
	return 0;
}
