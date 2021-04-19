#include <stdio.h>

int main(void)
{
	int num=3500;
	int cream=500;
	int ggang=700;
	int cola=400;
	
	for(int i=1; i<7; i++) //중복 for문을 돌리면서 마지막에 3500이 되는 값을 출력, 각 for문의 조건식은 각 물건 하나의 가격으로 3500이 나눠질 수 있는 최대 몫으로 했음
	{
		for(int j=1; j<5; j++)
		{
			for(int k=1; k<8; k++)
			{
				if((i*cream+j*ggang+k*cola)==3500)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i, j, k);
			}
		}
	}
	return 0;
}
