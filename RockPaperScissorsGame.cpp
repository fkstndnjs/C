#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int win, lose, draw; //������ ����� ����ϴ� �Լ������� ������ �����ϰ� ���������� ����

char* Show(int num) //0, 1, 2 ���� �߿� �� ���� ���ڷ� ������ �׿� ���� ����, ����, �� �� �ϳ��� �����ϴ� �Լ� 
{
	switch(num)
	{
		case 0:
			return "����";
			break;
		case 1:
			return "����";
			break;
		case 2:
			return "��";
			break;
	}
}

void GameResult(int my, int com) //���� ��ǻ���� ��� ����� ����ϴ� �Լ�
{
	if(my==com)
	{
		printf("�����ϴ�\n\n");
		draw++;
	}
		
	else
	{
		if(my==0)
		{
			if(com==1)
			{
				printf("�̰���ϴ�\n\n");
				win++;
			}
			else
			{
				printf("�����ϴ�\n\n");
				lose++;
			}
		}
		
		if(my==1)
		{
			if(com==2)
			{
				printf("�̰���ϴ�\n\n");
				win++;
			}
			else
			{
				printf("�����ϴ�\n\n");
				lose++;
			}
		}
		
		if(my==2)
		{
			if(com==0)
			{
				printf("�̰���ϴ�\n\n");
				win++;
			}
			else
			{
				printf("�����ϴ�\n\n");
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
		printf("������ 0, ������ 1, ���� 2\n����� ������? ");
		scanf("%d", &my); //�� ����
		
		com=rand()%3; //��ǻ���� ����
		
		printf("\n����� %s ����, ��ǻ�ʹ� %s ����\n\n", Show(my), Show(com)); //���� ��ǻ���� ���� ��� ��� 
		
		GameResult(my, com); //���� ��� ��� 
		
		if(lose>0) //lose������ 0���� Ŀ���� ���� ����(1�� ���� ���� ����) 
		{
			printf("������ ����˴ϴ�.\n\n");
			break;
		}
	}
	
	printf("������ ���: %d�� %d��\n", win, draw); //���� ��� �� �� �� ������ ���  
	 
	return 0;
}
		
