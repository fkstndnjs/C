#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ShowResult(int num)
{
	switch(num)
	{
		case 1:
			printf("바위");
			break;
		case 2:
			printf("가위");
			break;
		case 3:
			printf("보");
			break;
	}
}

void Show(int num, int com)
{
	printf("num: %d, com: %d\n", num, com); 
	printf("당신은 ");

	ShowResult(num);
		
	printf(" 선택, 컴퓨터는 ");
	
	ShowResult(com);
	
	printf(" 선택, ");
}

void Result(int num, int com, int* win, int* lose, int* draw)
{
	if(num==1)
	{
		if(com==1)
		{
			printf("비겼습니다.\n");
			(*draw)++;
		}
		else if(com==2)
		{
			printf("이겼습니다.\n");
			(*win)++;
		}
		else
		{
			printf("졌습니다.\n");
			(*lose)++;
		}
	}
	else if(num==2)
	{
		if(com==1)
		{
			printf("졌습니다.\n");
			(*lose)++;
		}
		else if(com==2)
		{
			printf("비겼습니다.\n");
			(*draw)++;
		}
		else
		{
			printf("이겼습니다.\n");
			(*win)++;
		}
	}
	else
	{
		if(com==1)
		{
			printf("이겼습니다.\n");
			(*win)++;
		}
		else if(com==2)
		{
			printf("졌습니다.\n");
			(*lose)++;
		}
		else
		{
			printf("비겼습니다.\n");
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
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &num);
		com=rand()%3+1;

		Show(num, com);
		Result(num, com, &win, &lose, &draw);

		if(lose==1)
			break;
	}
	
	printf("게임의 결과: %d승, %d무", win, draw);
	 
	return 0;
}
