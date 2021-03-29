#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int com[3]; //��ǻ���� ���� 3���� �����ϴ� �迭 
	int my[3]; //���� ���� 3���� �����ϴ� �迭
	int count=0; //�� ��°�� ������� ī��Ʈ�ϴ� ����
	 
	srand((int)time(NULL)); //����ð��� �̿��ؼ� ���� ���� 
	
	for(int i=0; i<3; i++) //��ǻ���� ���ڸ� �����ϴ� com�迭�� rand()�� �̿��Ͽ� ���� 3���� ����  
		com[i]=rand()%9;
	
	printf("Start Game!\n");
	
	while(1) //3strike�� ���ö����� �ݺ� 
	{
		int strike=0, ball=0; //while�� �ȿ� ���� ������ ���������ν� 3strike�� ������ ������ ��� 0���� �ʱ�ȭ 
		
		printf("3���� ���� ����: ");
		
		for(int i=0; i<3; i++) //���κ��� 3���� ���� �Է¹��� 
			scanf("%d", my+i); 
			
		count++; //�� �� �ݺ��ɶ����� �� ����  
		
		for(int i=0; i<3; i++)
		{
			if(my[i]==com[i]) //���� �Է��� ���� ��ǻ�Ϳ� �Է��� ���� �����鼭 ��ġ���� ���� ��� strike�� ���� 
				strike++;
				
			else //strike�� �ƴ� ��� 
			{
				for(int j=0; j<3; j++)
				{
					if(my[i]==com[j]) //���� �Է��� ���� ������ com�迭�� �ִ� ��� ���� ���غ��� �����ϸ� ball�� ���� 
						ball++;
				}
			}
		}
		
		printf("%d��° ���� ���: %d strike, %d ball!\n\n", count, strike, ball); 
		
		if(strike==3)//���ڸ� �� ������ ��� while�� Ż�� 
			break; 
			
	}
	
	printf("GAME OVER");
	
	return 0;
}
