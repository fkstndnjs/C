#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RmvEnt(char* str)
{
	int len=strlen(str);
	str[len-1]=0;
}

int main(void)
{
	char str[10]={0}; //0으로 초기화 안할경우 쓰레기값이 저장됨 
	int total=0;
	
	fgets(str, 10, stdin);
	
	puts(str);
	
	RmvEnt(str);
	
	puts(str);
	
	for(int i=0; i<10; i++)
	{
		if(str[i]=='\n')
			break;
		if(str[i]>47 && str[i]<58)
		{
			total+=str[i]-48;
			printf("str[%d]: %c, str[%d]-48: %d \n", i, str[i], i, str[i]-48);
		}
	}
	
	printf("total: %d", total);
	
	return 0;
}
	
