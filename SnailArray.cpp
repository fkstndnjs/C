#include <stdio.h>

int main(void)
{
	int arrlen; //n*n�迭�� n��
	
	scanf("%d", &arrlen); //n*n�迭�� n�� �Է� ����  
	
	int arr[arrlen][arrlen]={0}; //�迭 0���� �ʱ�ȭ  
	
	int i=0, j=0; //�迭 ������ ���� i, j ����  
	int a=0; //�� �� ���� �� ä�� ������ ��ģ ��, ���� �ݺ����ʹ� 1�� �۾��� for���� ���ǽ� �ȿ��� �ݺ��ϱ� ���� ���� 
	int count=0; //�迭�� �� ä������ Ż���� �� �ִ� count ����  
	int num=arrlen*arrlen; //n*n�迭�̹Ƿ� count������ �����ϴٰ� num���� Ŀ���� break 
	
	while(1)
	{
		for((a>0)?j+=1:j; j<arrlen-a; j++) 	//ó������ i, j�� 0, 0���� �����ϰ� 
		{									//�� �������ʹ� �ٸ� for���� ���� 1�� �������� �����ؾ� �ϱ� ������ ���� ���ǹ��� �־���
			scanf("%d", &arr[i][j]);		//(a>0)������ ���ǻ� ���� ���̸�, �ٸ� �������� ��ü ����  
			count++;
		} //���η� ������ �������� ä��� �ݺ���  
	
		if(count>=num) //count�� 2�� �迭�� ũ���� n*n�� ������ while�� Ż�� 
			break;
			
		j-=1; //for���� ������ �������� j�� �迭�� ũ���� n���� 1Ŀ���Ƿ� j-=1 
		
		for(i+=1;i<arrlen-a; i++)
		{
			scanf("%d", &arr[i][j]);
			count++;
		} //���η� �Ʒ� �������� ä��� �ݺ���  
		
		if(count>=num)
			break;
			
		i-=1;
		
		for(j-=1; j>=a; j--)
		{
			scanf("%d", &arr[i][j]);
			count++;
		} //���η� ���� �������� ä��� �ݺ���  
		
		if(count>=num)
			break;
			
		j+=1; //for���� ������ �������� j�� �迭�� ù��° �ε����� 0���� 1�۾����Ƿ� j+=1 
		
		for(i-=1; i>a; i--)
		{
			scanf("%d", &arr[i][j]);
			count++;
		} //���η� �� �������� ä��� �ݺ���  
		
		if(count>=num)
			break;
			
		i+=1;
		
		a+=1; //a�� 1�� �������ν� ���� while�ݺ������� for������ 1�� �۾��� ���ǽ� �ȿ��� �ݺ��� 
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

 
