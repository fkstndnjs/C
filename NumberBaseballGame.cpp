#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int com[3]; //컴퓨터의 숫자 3개를 저장하는 배열 
	int my[3]; //나의 숫자 3개를 저장하는 배열
	int count=0; //몇 번째에 맞췄는지 카운트하는 변수
	 
	srand((int)time(NULL)); //현재시간을 이용해서 씨드 설정 
	
	for(int i=0; i<3; i++) //컴퓨터의 숫자를 저장하는 com배열에 rand()를 이용하여 숫자 3개를 저장  
		com[i]=rand()%9;
	
	printf("Start Game!\n");
	
	while(1) //3strike가 나올때까지 반복 
	{
		int strike=0, ball=0; //while문 안에 지역 변수로 선언함으로써 3strike가 나오기 전까지 계속 0으로 초기화 
		
		printf("3개의 숫자 선택: ");
		
		for(int i=0; i<3; i++) //나로부터 3개의 숫자 입력받음 
			scanf("%d", my+i); 
			
		count++; //한 번 반복될때마다 값 증가  
		
		for(int i=0; i<3; i++)
		{
			if(my[i]==com[i]) //내가 입력한 값이 컴퓨터와 입력한 값과 같으면서 위치까지 같은 경우 strike값 증가 
				strike++;
				
			else //strike가 아닐 경우 
			{
				for(int j=0; j<3; j++)
				{
					if(my[i]==com[j]) //내가 입력한 값을 가지고 com배열에 있는 모든 값과 비교해보며 존재하면 ball값 증가 
						ball++;
				}
			}
		}
		
		printf("%d번째 도전 결과: %d strike, %d ball!\n\n", count, strike, ball); 
		
		if(strike==3)//숫자를 다 맞췄을 경우 while문 탈출 
			break; 
			
	}
	
	printf("GAME OVER");
	
	return 0;
}
