#include <stdio.h>

void Show(int (*arr)[4])
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
	int i=0, j=3;
	int tmp;
	
	for(int k=0; k<3; k++)
	{
		tmp=arr[0][i];
		arr[0][i]=arr[j][0];
		arr[j][0]=arr[3][j];
		arr[3][j]=arr[i][3];
		arr[i][3]=tmp;
		
		i++;
		j--;
	}
	
	tmp=arr[1][1];
	arr[1][1]=arr[2][1];
	arr[2][1]=arr[2][2];
	arr[2][2]=arr[1][2];
	arr[1][2]=tmp;
}

int main(void)
{
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int i, j;
	
	Show(arr);
	
	Swap(arr);
	Show(arr);
	
	Swap(arr);
	Show(arr);
	
	Swap(arr);
	Show(arr);
	
	return 0;
}
