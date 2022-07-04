#include <stdio.h>

int main(void)
{
	int num;
	int k;
	int check=2;
	
	scanf("%d", &num);
	
	if(num==1) //num이 1이면 만족하는 값이 2의 0승, 즉 0 하나이므로 k에 0대입 
		k=0;
	else //num이 1이 아니라면 ... 
	{
		k=1; //일단 무조건 k는 1이상이므로 1로 초기화
		
		while(1) //반복문동안 ... 
		{
			check*=2; //2를 저장해두었던 check에 2씩 곱한다(2의 n승) 
			
			if(check>num) //만약에 2를 곱했는데 num(입력받은 값)보다 커지면 k의 최솟값이 이미 나왔다는 것이므로 ... 
				break; //반복문을 탈출한다 
				
			k++; //k++를 if(check>num)보다 앞에 두면 check가 num보다 커졌는데도 2의 k+1승이 되므로 if문 뒤에 넣었다
		}
	}
	
	printf("공식을 만족하는 k의 최댓값은 %d", k);
	
	return 0;
}
