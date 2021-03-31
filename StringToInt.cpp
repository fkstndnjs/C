#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int arr[10];
	int max=0;
	
	fputs("문자열 입력: ", stdout);
	
	for(int i=0; i<10; i++)
	{	
		arr[i]=getchar();
		
		if(arr[i]=='\n')
			break;
			
		if(arr[i]>48&&arr[i]<57)
			max+=arr[i]-48;
	}
	
	printf("%d", max); 
			
	return 0;
}
