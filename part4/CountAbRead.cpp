#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp=fopen("text.txt", "rt");
	char str[100]={0};
	int j=0;
	int acount=0;
	int pcount=0;
	
	while((fgets(str, sizeof(str), fp)!=NULL))
	{
		printf("�о���� ���ڿ�: %s\n", str); //�о���� ���ڿ� ��� 
		
		int index[10]={0}; //fgets�ؼ� ���ڿ��� �о�� ������ ���ڿ��� ���� �ε����� �ִ� �迭, �ݺ����� �ʱ�ȭ �ϱ� ���� while�� �ȿ� ���� 
		
		for(int i=0; i<sizeof(str); i++) //�о���� ���ڿ��� ����Ǿ� �ִ� str�迭�� �����ؼ� ������ �ִ� �ε����� index�迭�� ���� 
		{
			if(str[i]==' ')
			{
				index[j]=i;
				j++;
			}
			else if(str[i]=='\n') //���ڿ��� ���� ���๮�ڰ� ������ for�� Ż�� 
				break;
		}
		
		printf("���ڿ��� ���� �ε���: "); 
		for(int i=0; i<sizeof(index)/sizeof(int); i++) //index�迭 ��� 
		{
			if(index[i]==0)
				break;
			printf("%d ", index[i]); 
		}
		
		printf("\n\n");
		
		j=0; //j���� �ʱ�ȭ�Ͽ� ���� ���� ���� �� �� ��� 
		
		if(str[0]=='A')
			acount++;
		else if(str[0]=='P')
			pcount++;
		
		for(int i=0; i<sizeof(index)/sizeof(int); i++)
		{
			if(str[index[i]+1]=='A')
				acount++;
			else if(str[index[i]+1]=='P')
				pcount++;
		}
		
	}
	
	printf("A�� �����ϴ� �ܾ��� ��: %d\nP�� �����ϴ� �ܾ��� ��: %d\n", acount, pcount); 
	
	return 0;
}
