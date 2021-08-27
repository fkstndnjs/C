#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int com[3];
	int my[3];
	int i;
	int count=0;
	
	srand((int)time(NULL));
	
	for(i=0; i<3; i++)
		com[i]=rand()%10;
		
	printf("START GAME\n\n");
	
	while(1)
	{
		int strike=0, ball=0;
		count++;
		
		printf("3개의 숫자선택: ");
		
		for(i=0; i<3; i++)
		{
			scanf("%d", &my[i]);
			
			if(com[i]==my[i])
				strike++;
		}
		  
		for(i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				if(i!=j && my[i]==com[j])
					ball++;
			}
		}
		
		printf("%d번째 도전 결과: %d strike, %d ball\n\n", count, strike, ball);
		
		if(strike==3)
			break;
	}
	
	printf("GAME OVER");
	
	return 0;
}
