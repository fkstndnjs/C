#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int num;
	int j=0;
	
	printf("���ڿ��� �ִ� ����: ");
	scanf("%d", &num);
	fflush(stdin);
	
	char * ptr = (char*)malloc(num);
	
	printf("���ڿ� �Է�: "); 
	fgets(ptr, num, stdin);
	
	ptr[strlen(ptr)-1]=0;
	
	for(int i=strlen(ptr); i>0; i--)
	{
		if(ptr[i]==' ')
		{
			printf("%s ", ptr+i+1);
			ptr[i]=0;
		}
	}
	
	printf("%s", ptr);
	
	free(ptr);
	
	return 0;
}
