#include <stdio.h>

int main(void)
{
	int num=2; //1�� �����ϰ� 2���� �����ϴ� �������� ���� num ����
	int count2=0;
	
	for(num; num<100; num++)
	{
		int count=0; //num�� �ؿ� ������ i�� ����� 0�� ������ Ƚ���� �����ϱ� ���� count ���� 
		
		for(int i=1; i<=num; i++) //i�� 1���� ���� num������ �������� ���� 
		{
			if(num%i==0) //������ 0�� ������ count�� 1���� 
				count++;
		}
		
		if(count<3) //�������� ������ for���� �������ͼ�, count���� 3���� ������(��, 2��) �Ҽ���� ���̹Ƿ� �� ���� num���� ���
			printf("%d ", num);
		else //�ƴϸ� �ٽ� ���ǹ����� 
			continue;
		
		count2++; //num���� 10���� ����ϱ� ���� count2 ���� 
		
		if(count2>9) //count2�� 10�� �Ǹ� �Ҽ��� num�� 10�� ��µǾ��ٴ� ���̹Ƿ� for�� Ż�� 
			break;
	}
	
	return 0;
}
