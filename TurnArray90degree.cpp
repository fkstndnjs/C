#include <stdio.h>

void Show(int (*arr)[4]) //2�� �迭�� ���ڷ� �޾Ƽ� ����ϴ� �Լ� 
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

void Swap(int (*arr)[4]) //90�� ȸ�� �Լ� 
{
	/* //������Ÿ�� 
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
	
	for(int i=0; i<3; i++) //�Ʒ��� ������ 3�� �ݺ��ϸ� �� ���� 90�� �̵��ϰ� �� 
	{
			int temp=arr[0][0]; //[0][0]�� temp�� ����  
			
			for(int j=0; j<3; j++) //���� ���� �� ĭ�� ���� �� ĭ�� �̵� 
				arr[j][0]=arr[j+1][0];
			
			for(int j=0; j<3; j++) //�Ʒ� ���� �� ĭ�� �������� �� ĭ�� �̵� 
				arr[3][j]=arr[3][j+1];
				
			for(int j=3; j>0; j--) //������ ���� �� ĭ�� �Ʒ��� �� ĭ�� �̵� 
				arr[j][3]=arr[j-1][3];
			
			for(int j=3; j>1; j--) //���� ���� �� ĭ�� [0][0]�� �����ϰ� �� ĭ�� �̵� 
				arr[0][j]=arr[0][j-1];

			arr[0][1]=temp; //���������� [0][0]�� [0][1]�� �־��ָ鼭 �� 
	}
 
	//�߰��� �迭 ��� 
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
	
	Swap(arr); //90�� ȸ�� 
	Show(arr); //��� 
	
	Swap(arr); //90�� ȸ�� 
	Show(arr); //��� 
	
	Swap(arr); //90�� ȸ�� 
	Show(arr); //��� 
	
	return 0;	
}





	
