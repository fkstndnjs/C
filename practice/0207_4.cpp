#include <stdio.h>

int Func(char * str, int i, int zero)
{
	if(zero>i)
		return 1;
	else
	{
		if(str[zero]==str[i])
		{
			return 1*Func(str, i-1, zero+1);
		}
		else
			return 0;
	}
}
int main()
{
	char str[50];
	int i;
	int zero=0;
	
	scanf("%s", str);
	
	for(i=0; i<50; i++)
	{
		if(str[i]=='\0')
			break;
	}
	
	i-=1;
	
	if(Func(str, i, zero))
		printf("ȸ���Դϴ�");
	else
		printf("ȸ���� �ƴմϴ�"); 
	
	return 0;
}
