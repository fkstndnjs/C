#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int win, lose, draw; //게임의 결과를 출력하는 함수에서도 접근이 가능하게 전역변수로 선언

char* Show(int num) //0, 1, 2 정수 중에 한 개를 인자로 받으면 그에 따라 바위, 가위, 보 중 하나를 리턴하는 함수 
{
	switch(num)
	{
		case 0:
			return "바위";
			break;
		case 1:
			return "가위";
			break;
		case 2:
			return "보";
			break;
	}
}

void GameResult(int my, int com) //나와 컴퓨터의 대결 결과를 출력하는 함수
{
	if(my==com)
	{
		printf("비겼습니다\n\n");
		draw++;
	}
		
	else
	{
		if(my==0)
		{
			if(com==1)
			{
				printf("이겼습니다\n\n");
				win++;
			}
			else
			{
				printf("졌습니다\n\n");
				lose++;
			}
		}
		
		if(my==1)
		{
			if(com==2)
			{
				printf("이겼습니다\n\n");
				win++;
			}
			else
			{
				printf("졌습니다\n\n");
				lose++;
			}
		}
		
		if(my==2)
		{
			if(com==0)
			{
				printf("이겼습니다\n\n");
				win++;
			}
			else
			{
				printf("졌습니다\n\n");
				lose++;
			}
		}
	}
}


int main(void)
{
	int my, com;
	srand((int)time(NULL));
	
	while(1)
	{
		printf("바위는 0, 가위는 1, 보는 2\n당신의 선택은? ");
		scanf("%d", &my); //내 선택
		
		com=rand()%3; //컴퓨터의 선택
		
		printf("\n당신은 %s 선택, 컴퓨터는 %s 선택\n\n", Show(my), Show(com)); //나와 컴퓨터의 선택 결과 출력 
		
		GameResult(my, com); //게임 결과 출력 
		
		if(lose>0) //lose변수가 0보다 커지면 게임 종료(1번 지면 게임 종료) 
		{
			printf("게임이 종료됩니다.\n\n");
			break;
		}
	}
	
	printf("게임의 결과: %d승 %d무\n", win, draw); //게임 결과 몇 승 몇 무인지 출력  
	 
	return 0;
}
		
