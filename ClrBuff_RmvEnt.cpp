#include <stdio.h>
#include <string.h>

void ClrBuff(char* str) //배열을 꽉 채워서 입력을 받는데 입력할 때 배열의 길이를 초과할 경우를 대비하는 함수 
{
	while(getchar()!='\n'); //enter를 만날 때까지 입력 버퍼에 저장된 값을 읽어들여 입력 버퍼를 초기화함 
}

void RmvEnt(char* str) //배열을 꽉 채우지 않은 경우에 마지막에 입력되는 enter값까지 배열에 포함되므로 그 enter값을 배열에서 지우는 함수 
{
	int num=strlen(str);
	
	str[num-1]=0; //strlen함수를 이용하면 널 문자 전까지의 길이가 반환, 하지만 배열의 인덱스는 0부터 시작이므로 -1을 해줘야 enter값이 저장되어 있는 인덱스임 
}

int main(void)
{
	char str1[5];
	char str2[5];
	
	printf("4자리의 문자열 입력(ClrBuff함수 실험): ");
	
	fgets(str1, 5, stdin); //널 문자를 제외한 최대 4자리의 문자열을 입력받음 

	ClrBuff(str1); //만약 첫 번째 입력에서 4자리 이상의 문자열을 입력받았을 경우 fgets함수에서 읽어들인 4개를 제외한 나머지는 버려짐 
	
	printf("str1: %s\n\n", str1); //str1 문자열 출력 
	
	printf("3자리의 문자열 입력(RmvEnt함수 실험): ");
	
	fgets(str2, 5, stdin); //3자리의 문자열만 입력(enter값 실험을 위해) 
	
	printf("str2의 길이: %d\n", strlen(str2));
	puts(str2);
	printf("-------\n"); //enter확인용 
	
	RmvEnt(str2); //enter값이 저장된 배열 인덱스에 들어가 enter값 삭제 
	
	printf("str2의 길이: %d\n", strlen(str2));
	puts(str2);
	printf("-------"); //enter확인용
		
	return 0;
}
