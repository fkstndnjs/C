#include <stdio.h>

int main(void)
{
	int num1, num2;
	int temp; //num1과 num2의 값을 바꿀 수도 있는 상황일 때 사용할 temp변수 
	
	scanf("%d %d", &num1, &num2); //num1과 num2에 출력할 구구단의 시작과 끝을 순서에 관계없이 입력 받음
	
	if(num1>num2) //num1이 더 크면 num1과 num2에 값을 바꿈
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	
	for(int i=num1; i<=num2; i++) //num1부터 num2까지 구구단 출력
	{
		for(int j=1; j<10; j++)
		{
			printf("%dX%d=%d\n", i, j, i*j);
		}
		printf("\n");
	}
	
	return 0;
}
