#include <stdio.h>

int main(void)
{
	int num=3500;
	int cream=500;
	int ggang=700;
	int cola=400;
	
	for(int i=1; i<7; i++) //�ߺ� for���� �����鼭 �������� 3500�� �Ǵ� ���� ���, �� for���� ���ǽ��� �� ���� �ϳ��� �������� 3500�� ������ �� �ִ� �ִ� ������ ����
	{
		for(int j=1; j<5; j++)
		{
			for(int k=1; k<8; k++)
			{
				if((i*cream+j*ggang+k*cola)==3500)
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", i, j, k);
			}
		}
	}
	return 0;
}
