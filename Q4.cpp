#include <stdio.h>

int Check(char* str, int i, int j)
{
	if(j<i)
	{
		if(str[j]==str[i])
		{
			return 1*Check(str, i-1, j+1);
		}
		else
			return 0;
	}
	else
		return 1;
}

int main(void)
{
	char str[30];
	bool a;
	
	scanf("%s", str);
	int i=0,j=0;
	
	for(i=0; i<30; i++)
	{
		if(str[i]==0)
			break;
	}
		
	if(Check(str, i-1, j))
		printf("ȸ���Դϴ�");
	else
		printf("ȸ���� �ƴմϴ�"); 
	
	return 0;
}
