#include <stdio.h>

int main(void)
{
	int num=2; //1은 제외하고 2부터 시작하는 정수값을 위한 num 변수
	int count2=0;
	
	for(num; num<100; num++)
	{
		int count=0; //num이 밑에 나오는 i로 나누어서 0이 나오는 횟수를 저장하기 위한 count 변수 
		
		for(int i=1; i<=num; i++) //i는 1부터 현재 num값까지 나눗셈을 진행 
		{
			if(num%i==0) //나눠서 0이 나오면 count값 1증가 
				count++;
		}
		
		if(count<3) //나눗셈이 끝나고 for문을 빠져나와서, count값이 3보다 작으면(즉, 2면) 소수라는 뜻이므로 그 때의 num값을 출력
			printf("%d ", num);
		else //아니면 다시 조건문으로 
			continue;
		
		count2++; //num값을 10개만 출력하기 위한 count2 변수 
		
		if(count2>9) //count2가 10이 되면 소수인 num이 10개 출력되었다는 뜻이므로 for문 탈출 
			break;
	}
	
	return 0;
}
