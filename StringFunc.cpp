#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ClrBuff(char* str) //배열을 꽉 채워서 입력을 받는데 입력할 때 배열의 길이를 초과할 경우를 대비하는 함수
{
	while(getchar()!='\n'); //enter를 만날 때까지 입력 버퍼에 저장된 값을 읽어들여 입력 버퍼를 초기화함 
}

void RmvEnt(char* str) //배열을 꽉 채우지 않은 경우에 마지막에 입력되는 enter값까지 배열에 포함되므로 그 enter값을 배열에서 지우는 함수 
{
	int num=strlen(str);
	
	str[num-1]=0; //strlen함수를 이용하면 널 문자 전까지의 길이가 반환됨, 따라서 그 값에서 1을 빼면 enter값이 있는 배열의 인덱스값이므로 거기에 널문자를 삽입 
}

int main(void)
{
	char str1[10];
	char str2[10];
	
	fgets(str1, 10, stdin);
	ClrBuff(str1);
	
	fgets(str2, 10, stdin);
	RmvEnt(str2);
	
	puts(str1);
	puts(str2);
	
	int cmp=!strncmp(str2, str1+3, 3);
	
	puts(str2);
	
	if(cmp==1)
		puts("같습니다"); 
		
	printf("%d", atoi(&str1[2]));
	return 0;
}
