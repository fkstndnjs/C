#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void EmtBuff(void)
{
	while(getchar()!='\n');
}

void RmvEnt(char arr[])
{
	int num = strlen(arr);
	arr[num-1]=0;
}

int main(void)
{
	char arr[20];
	int zero=(int)'0'; //48
	int nine=(int)'9'; //57
	int max=0;
	
	fgets(arr, 20, stdin);
	RmvEnt(arr);
	
	for(int i=0; i<strlen(arr); i++)
	{
		if(arr[i]>47 && arr[i]<58)
		{
			char temp=arr[i];
			max+=atoi(&temp);
		}
		printf("%d\n", max);
	}
	
	printf("\n\n%d", max);
	
	return 0;
}
