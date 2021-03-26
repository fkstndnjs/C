#include <stdio.h>

void Show(int (*arr)[4]) //2중 배열을 인자로 받아서 출력하는 함수 
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Swap(int (*arr)[4]) //90도 회전 함수 
{
	/* //프로토타입 
		for(int i=0; i<3; i++)
		{
			int temp=arr[0][0];
			arr[0][0]=arr[1][0];
			arr[1][0]=arr[2][0];
			arr[2][0]=arr[3][0];
			
			arr[3][0]=arr[3][1];
			arr[3][1]=arr[3][2];
			arr[3][2]=arr[3][3];
			
			arr[3][3]=arr[2][3];
			arr[2][3]=arr[1][3];
			arr[1][3]=arr[0][3];
			
			arr[0][3]=arr[0][2];
			arr[0][2]=arr[0][1];
			arr[0][1]=temp;	
		}
	*/	
	
	for(int i=0; i<3; i++) //아래의 과정을 3번 반복하면 한 줄이 90도 이동하게 됨 
	{
			int temp=arr[0][0]; //[0][0]을 temp에 저장  
			
			for(int j=0; j<3; j++) //왼쪽 줄의 각 칸을 위로 한 칸씩 이동 
				arr[j][0]=arr[j+1][0];
			
			for(int j=0; j<3; j++) //아래 줄의 각 칸을 왼쪽으로 한 칸씩 이동 
				arr[3][j]=arr[3][j+1];
				
			for(int j=3; j>0; j--) //오른쪽 줄의 각 칸을 아래로 한 칸씩 이동 
				arr[j][3]=arr[j-1][3];
			
			for(int j=3; j>1; j--) //위쪽 줄의 각 칸을 [0][0]을 제외하고 한 칸씩 이동 
				arr[0][j]=arr[0][j-1];

			arr[0][1]=temp; //마지막으로 [0][0]을 [0][1]에 넣어주면서 끝 
	}
 
	//중간의 배열 출력 
	int temp2=arr[1][1];
	arr[1][1]=arr[2][1];
	arr[2][1]=arr[2][2];
	arr[2][2]=arr[1][2];
	arr[1][2]=temp2;
	
}
	

int main(void)
{
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
	Show(arr);
	
	Swap(arr); //90도 회전 
	Show(arr); //출력 
	
	Swap(arr); //90도 회전 
	Show(arr); //출력 
	
	Swap(arr); //90도 회전 
	Show(arr); //출력 
	
	return 0;	
}





	
