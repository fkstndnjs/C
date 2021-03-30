#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RmvEnt(char* str)//배열에 enter값을 제외시키는 함수 
{
	int num=strlen(str);
	str[num-1]=0;
}

int main(void)
{
	char str1[20]={0}; //첫 번째 사람의 정보 
	char str2[20]={0}; //두 번째 사람의 정보 
	int i=0;
	int j=0;
	
	fgets(str1, 20, stdin);
	RmvEnt(str1);
	
	fgets(str2, 20, stdin);
	RmvEnt(str2);
	
	for(i; i<20; i++) //str1에 공백 문자가 저장된 인덱스를 찾는 반복문 
	{
		if(str1[i]==' ')
			break;	
	}

	for(j; j<20; j++) //str2에 공백 문자가 저장된 인덱스를 찾는 반복문
	{
		if(str2[j]==' ')
			break;	
	}
	
	if(i!=j) //공백 문자가 저장된 위치가 다르면 문자를 떠나서 길이가 다르므로 무조건 이름이 다르다는 뜻 
		puts("이름이 다릅니다");
	else
	{
		if(!strncmp(str1, str2, i-1)) //공백 문자 전까지 str1과 str2를 비교 
			puts("이름이 같습니다");
		else
			puts("이름이 다릅니다");
	}
	
	i+=1; //공백 문자 다음 위치=나이가 저장되어있는 인덱스 
	j+=1;
	
	if(!strncmp(str1+i, str2+j, 2)) //나이가 저장되어 있는 인덱스부터 나이가 2자리이므로 2개 비교 
		puts("나이가 같습니다");
	else
		puts("나이가 다릅니다"); 
	
	return 0;
}
