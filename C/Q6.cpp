#include <stdio.h>

int main(void)
{
	int num;
	int hour=0;
	int min=0;
	int second=0;
	
	scanf("%d", &num); //�� �Է� ����
	
	while(1)
	{	
		if(num-3600>0) //num���� 3600�� ���µ� 0���� ũ�ٸ� �ð� ������ �����ִٴ� ���̹Ƿ� ...
		{
			num-=3600; //3600�� ���� num�� �����ϰ� ...
			hour++; //hour���� �ϳ� ������Ŵ 
		}
		else //num���� 3600�� ���µ� 0���ϸ� �ð� ������ ���̻� �������� �ʴٴ� ���̹Ƿ� ...
			break; //�ݺ����� Ż���Ѵ� 
	}

	while(1)
	{
		if(num-60>0) //num���� 60�� ���µ� 0���� ũ�ٸ� �� ������ �����ִٴ� ���̹Ƿ� ...
		{
			num-=60; //60�� ���� num�� �����ϰ� ... 
			min++; //min���� �ϳ� ������Ŵ 
		}
		else //num���� 60�� ���µ� 0���ϸ� �� ������ ���̻� �������� �ʴٴ� ���̹Ƿ� ... 
			break; //�ݺ����� Ż���Ѵ� 
	}

	second=num;
	
	printf("h: %d, m: %d, s: %d", hour, min, second);
	
	return 0;
}
	
	
	
	
	
	