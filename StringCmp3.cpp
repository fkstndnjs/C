#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	int i, j;
	
	fgets(str1, 20, stdin);
	fgets(str2, 20, stdin);
	
	for(i=0; i<20; i++)
	{
		if(str1[i]==' ')
			break;
	}
	
	for(j=0; j<20; j++)
	{
		if(str2[j]==' ')
			break;
	}
	
	if(i!=j)
		puts("이름이 다릅니다");
	else
	{
		if(!strncmp(str1, str2, i))
			puts("이름이 같습니다");
		else
			puts("이름이 다릅니다");
	}
	
	if(!strncmp(str1+i, str2+j, 2))
		puts("나이가 같습니다");
	else
		puts("나이가 다릅니다");
	
	return 0;
}
