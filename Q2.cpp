#include <stdio.h>

int main(void)
{
	int num1, num2;
	int temp; //num1�� num2�� ���� �ٲ� ���� �ִ� ��Ȳ�� �� ����� temp���� 
	
	scanf("%d %d", &num1, &num2); //num1�� num2�� ����� �������� ���۰� ���� ������ ������� �Է� ����
	
	if(num1>num2) //num1�� �� ũ�� num1�� num2�� ���� �ٲ�
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	
	for(int i=num1; i<=num2; i++) //num1���� num2���� ������ ���
	{
		for(int j=1; j<10; j++)
		{
			printf("%dX%d=%d\n", i, j, i*j);
		}
		printf("\n");
	}
	
	return 0;
}
