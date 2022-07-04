#include <stdio.h>

int main(void)
{
	int num;
	int hour=0;
	int min=0;
	int second=0;
	
	scanf("%d", &num); //초 입력 받음
	
	while(1)
	{	
		if(num-3600>0) //num에서 3600을 뺐는데 0보다 크다면 시간 단위가 남아있다는 뜻이므로 ...
		{
			num-=3600; //3600을 빼서 num에 저장하고 ...
			hour++; //hour값을 하나 증가시킴 
		}
		else //num에서 3600을 뺐는데 0이하면 시간 단위가 더이상 남아있지 않다는 뜻이므로 ...
			break; //반복문을 탈출한다 
	}

	while(1)
	{
		if(num-60>0) //num에서 60을 뺐는데 0보다 크다면 분 단위가 남아있다는 뜻이므로 ...
		{
			num-=60; //60을 빼서 num에 저장하고 ... 
			min++; //min값을 하나 증가시킴 
		}
		else //num에서 60을 뺐는데 0이하면 분 단위가 더이상 남아있지 않다는 뜻이므로 ... 
			break; //반복문을 탈춣한다 
	}

	second=num;
	
	printf("h: %d, m: %d, s: %d", hour, min, second);
	
	return 0;
}
	
	
	
	
	
	
