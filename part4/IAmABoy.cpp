#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* Alloc(int len)
{
	char* name=(char*)malloc(sizeof(char)*len); //동적할당을 통해 힙 영역에 메모리 할당 
	return name;
}

void SwapAndShow(char* name, int len)
{
	char temp[len]={0}; //name에 있는 문자열을 거꾸로 저장하기 위한 배열, 0으로 초기화 안하면 있다가 strcat할 때 어디가 처음인지 모르고 쓰레기값 저장됨 
	int index[10]={0}; //정수형 배열 
	int j=0; //인덱스 
	int nameLen; //name의 길이 
	
	for(int i=0; i<len; i++) //문자열의 공백 인덱스를 찾아서 index배열에 삽입 
	{
		if(name[i]==' ') //name[i]가 공백이면 index배열에 i를 저장 
		{
			index[j]=i;
			j++; 
		}
	}
	
	nameLen=strlen(name); //name의 길이 저장 
	
	printf("name의 길이: %d\n", nameLen);
	
	index[j]=nameLen; //name의 길이=name문자열의 맨 끝의 인덱스이므로 아무것도 없지만 그걸 공백이라고 치고 index배열의 끝에 nameLen을 삽입 
	 
	printf("index[10]: ");
	
	for(int i=0; i<10; i++) //index배열 출력 
	{		
		printf("%d ", index[i]);
	}
	
	printf("\nj의 값: %d\n", j); //j의 값 출력 

	for(int i=0; i<j; i++)
	{
		strncat(temp, name+index[j-1-i]+1, index[j-i]-index[j-1-i]-1); //temp에 name문자열을 공백을 기준으로 index배열에 저장되어 있는 앞 뒤 수의 차이만큼 strcat 
		//맨 처음에는 nameLen(name문자열의 길이)에 저장되어 있는 값을 가지고 마지막 단어를 strcat해야되기 때문에 index[j-1]을 기준으로 코드 작성 
		temp[strlen(temp)]=' '; //문자열을 공백을 제외하고 strcat한 후 공백 삽입(맨 처음 문자열을 strcat할 때, name문자열의 끝에는 공백이 없으므로 이렇게 해야됨) 
	}
	
	strncat(temp, name, index[0]); //마지막 단어 strcat 
	
	printf("%s\n", temp); //거꾸로 된 문자열 출력 
}

int main(void)
{
	char* name; //문자열을 저장할 변수 
	int len; //메모리 크기를 저장할 변수
	
	printf("할당할 메모리 크기를 입력하세요: ");
	scanf("%d", &len); //메모리 크기 입력 받음 
	getchar(); //입력 버퍼에서 "엔터"제거 
	
	name=Alloc(len); //입력한 메모리 크기만큼 메모리 할당 
	
	printf("문자열을 입력하세요: ");
	gets(name); //문자열 입력 받음 
	
	SwapAndShow(name, len); //문자열 거꾸로 출력하는 함수 
	
	return 0;
}
	
	
