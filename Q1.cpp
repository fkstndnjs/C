#include <stdio.h>

void ShowArr(int (*arr)[4])
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		
		printf("\n");
	}
	printf("\n");
}

void Swap(int (*arr)[4])
{
	int temp;
	int j=3;
	
	/*
	int temp=arr[0][0];
	arr[0][0]=arr[3][0];
	arr[3][0]=arr[3][3];
	arr[3][3]=arr[0][3];
	arr[0][3]=temp;
	
	temp=arr[0][1];
	arr[0][1]=arr[2][0];
	arr[2][0]=arr[3][2];
	arr[3][2]=arr[1][3];
	arr[1][3]=temp;
	*/
	
	for(int i=0; i<3; i++) //위에 작성한 코드에서 규칙을 찾아서 for문으로 만듦 
	{
		temp=arr[0][i];
		arr[0][i]=arr[j][0];
		arr[j][0]=arr[3][j];
		arr[3][j]=arr[i][3];
		arr[i][3]=temp;
		j--;
	}
	
	//가운데 4칸 회전 
	temp=arr[1][1];
	arr[1][1]=arr[2][1];
	arr[2][1]=arr[2][2];
	arr[2][2]=arr[1][2];
	arr[1][2]=temp;
}

int main(void)
{
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
	ShowArr(arr);
	
	Swap(arr);
	ShowArr(arr);
	
	Swap(arr);
	ShowArr(arr);
	
	Swap(arr);
	ShowArr(arr);
	
	return 0;
}
