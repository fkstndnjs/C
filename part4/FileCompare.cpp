#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	FILE* fp1=fopen(argv[1], "rt");
	FILE* fp2=fopen(argv[2], "rt");
	
	int num1=0;
	int i=0;
	char ch1;
	char str1[30];
	 
	int num2=0;
	int j=0;
	char ch2;
	char str2[30];
	
	int cmp;
	
	while((ch1=fgetc(fp1))!=EOF) //fp1������ EOF������ ch1�� fget�� �� ���ھ� ���� 
	{	
		str1[i]=ch1; //str1�迭�� �� ���ھ� ���� 
		num1++; //fp1�� fp2�� ���ڸ� ���� ���ϱ� ���� ī��Ʈ�� �÷��� 1�̶� ���̰� ���� �ٸ� ����(���ڿ�)���� �� �� ���� 
		i++; //str1[i]�� �ε��� ���� 
	}
	
	printf("str1: %s\n\n", str1); //str1 ��� 
	
	while((ch2=fgetc(fp2))!=EOF) //���� ���� 
	{
		str2[j]=ch2;
		num2++;
		j++;
	}
	
	printf("str2: %s\n\n", str2); //str2 ��� 
	
	if(num1==num2) //���ڰ� ������ �ϴ� �հ� 
	{
		if(!strcmp(str1, str2)) //str1, str2�� strcmp ���Ѽ� �̰ű��� ������ ��¥ ���� ���̹Ƿ� ������ "�����ϴ�" ��� 
			puts("�����ϴ�"); 
		else //���ڰ� ������ �ȿ� ���ڰ� �ϳ��� �ٸ��� "�ٸ��ϴ�" ��� 
			puts("�ٸ��ϴ�"); 
	}
	else //���ڰ� �ٸ��� �ƿ� ���ڸ� ���غ� �ʿ䵵 ��� �ٷ� "�ٸ��ϴ�" ��� 
		puts("�ٸ��ϴ�"); 
		
	return 0;
}
				
		
		
