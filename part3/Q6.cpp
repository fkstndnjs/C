#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int com[3];
	srand((int)time(NULL));
	
	for(int i=0; i<3; i++)
	{
		com[i]=rand()%9;
	}
	
	for(int i=0; i<3; i++)
	{
		printf("%d ", com[i]);
	}
	
	printf("\n");
	
	while(1)
	{
		int player[3];
		int strike=0, ball=0;
		
		for(int i=0; i<3; i++)
		{
			scanf("%d", player+i);
		}
		
		for(int i=0; i<3; i++)
		{
			if(com[i]==player[i])
				strike++;
			else
			{
				for(int j=0; j<3; j++)
				{
					if(com[i]==player[j])
						ball++;
				}
			}
		}
		
		printf("%dstrike, %dball\n", strike, ball); 
		if(strike==3)
			break;
	}
	
	return 0;
}
