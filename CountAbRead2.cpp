#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp=fopen("text.txt", "rt");
	char str[100]={0};
	int acount=0;
	int pcount=0;
	
	while((fgets(str, sizeof(str), fp)!=NULL))
	{
		printf("�о���� ���ڿ�: %s\n", str); //�о���� ���ڿ� ��� 
		
		int index[10]={0}; //fgets�ؼ� ���ڿ��� �о�� ������ ���ڿ��� ���� �ε����� �ִ� �迭, �ݺ����� �ʱ�ȭ �ϱ� ���� while�� �ȿ� ���� 
		int j=1; //�ݺ����� �ʱ�ȭ �ϱ� ���� while�� �ȿ� ����, 1���� ������ ������ index[0]���� ������ str[0]�� ���ߵǱ� ���� 
		
		for(int i=0; i<sizeof(str); i++) //�о���� ���ڿ��� ����Ǿ� �ִ� str�迭�� �����ؼ� ������ �ִ� �ε����� index�迭�� ���� 
		{
			if(str[i]==' ') //�����̸� 
			{
				index[j]=i+1; //���� ���� �ε���, �� �ܾ �����ϴ� �ε����� index[j]�� ���� 
				j++; //j �ϳ� ���� 
			}
			else if(str[i]=='\n') //���ڿ��� ���� ���๮�ڰ� ������ for�� Ż��, ���� sizeof(str)��ŭ �ݺ��� �ʿ� ���� 
				break;
		}
		
		printf("���ڿ��� ���� �ε���: "); 
		for(int i=0; i<sizeof(index)/sizeof(int); i++) //index�迭 ��� 
		{
			printf("%d ", index[i]); 
		}
		
		printf("\n\n");
		
		
		for(int i=0; i<sizeof(index)/sizeof(int); i++) //AȤ�� P�� �����ϸ� acount, pcount�� ���� ���� ��Ű�� �ݺ��� 
		{
			if(i>0 && index[i]==0) //index[0]�� 0�̰�, �ݺ��ϴٰ� ���߿� ���� �ε����� ������ ���� ������ index�� �տ��� 0���� �ʱ�ȭ �����Ƿ�
				break;             //�� 0�� ������ ������ �ؿ��� str[index[i]]�� str[0]�� �Ǿ �� ī��Ʈ�� ������Ű�� ������ �������� ������ ���ÿ� Ż�⹮ 
			else
			{
				if(str[index[i]]=='A') //A�� �����ϸ� acount ���� 
					acount++;
				else if(str[index[i]]=='P') //P�� �����ϸ� pcount ���� 
					pcount++;
			}
		}
	}
	
	printf("A�� �����ϴ� �ܾ��� ��: %d\nP�� �����ϴ� �ܾ��� ��: %d\n", acount, pcount); 
	
	return 0;
}
