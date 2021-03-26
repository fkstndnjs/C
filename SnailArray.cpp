#include <stdio.h>

int main(void)
{
	int arrlen; //n*n배열의 n값
	
	scanf("%d", &arrlen); //n*n배열의 n값 입력 받음  
	
	int arr[arrlen][arrlen]={0}; //배열 0으로 초기화  
	
	int i=0, j=0; //배열 접근을 위한 i, j 변수  
	int a=0; //한 번 겉을 쭉 채운 과정을 거친 후, 다음 반복부터는 1씩 작아진 for문의 조건식 안에서 반복하기 위한 변수 
	int count=0; //배열이 다 채워지면 탈출할 수 있는 count 변수  
	int num=arrlen*arrlen; //n*n배열이므로 count변수가 증가하다가 num보다 커지면 break 
	
	while(1)
	{
		for((a>0)?j+=1:j; j<arrlen-a; j++) 	//처음에만 i, j가 0, 0에서 시작하고 
		{									//그 다음부터는 다른 for문과 같이 1씩 더해져서 시작해야 하기 때문에 삼중 조건문을 넣었음
			scanf("%d", &arr[i][j]);		//(a>0)조건은 편의상 넣은 것이며, 다른 조건으로 대체 가능  
			count++;
		} //가로로 오른쪽 방향으로 채우는 반복문  
	
		if(count>=num) //count가 2중 배열의 크기인 n*n을 넘으면 while문 탈출 
			break;
			
		j-=1; //for문이 끝나면 마지막에 j가 배열의 크기인 n보다 1커지므로 j-=1 
		
		for(i+=1;i<arrlen-a; i++)
		{
			scanf("%d", &arr[i][j]);
			count++;
		} //세로로 아래 방향으로 채우는 반복문  
		
		if(count>=num)
			break;
			
		i-=1;
		
		for(j-=1; j>=a; j--)
		{
			scanf("%d", &arr[i][j]);
			count++;
		} //가로로 왼쪽 방향으로 채우는 반복문  
		
		if(count>=num)
			break;
			
		j+=1; //for문이 끝나면 마지막에 j가 배열의 첫번째 인덱스인 0보다 1작아지므로 j+=1 
		
		for(i-=1; i>a; i--)
		{
			scanf("%d", &arr[i][j]);
			count++;
		} //세로로 위 방향으로 채우는 반복문  
		
		if(count>=num)
			break;
			
		i+=1;
		
		a+=1; //a를 1씩 더함으로써 다음 while반복에서의 for문들은 1씩 작아진 조건식 안에서 반복됨 
	}
	
	for(int i=0; i<arrlen; i++)
	{
		for(int j=0; j<arrlen; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}

 
