#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	FILE* fp1=fopen(argv[1], "rt");
	FILE* fp2=fopen(argv[2], "rt");
	
	int num1=0;
	int i=0;
	char ch1;
	char str1[30];
	 
	int num2=0;
	int j=0;
	char ch2;
	char str2[30];
	
	int cmp;
	
	while((ch1=fgetc(fp1))!=EOF) //fp1파일을 EOF전까지 ch1에 fget로 한 글자씩 받음 
	{	
		str1[i]=ch1; //str1배열에 한 글자씩 넣음 
		num1++; //fp1과 fp2의 문자를 서로 비교하기 전에 카운트를 올려서 1이라도 차이가 나면 다른 파일(문자열)임을 알 수 있음 
		i++; //str1[i]의 인덱스 증가 
	}
	
	printf("str1: %s\n\n", str1); //str1 출력 
	
	while((ch2=fgetc(fp2))!=EOF) //위와 같음 
	{
		str2[j]=ch2;
		num2++;
		j++;
	}
	
	printf("str2: %s\n\n", str2); //str2 출력 
	
	if(num1==num2) //숫자가 같으면 일단 합격 
	{
		if(!strcmp(str1, str2)) //str1, str2를 strcmp 시켜서 이거까지 같으면 진짜 같은 것이므로 같으면 "같습니다" 출력 
			puts("같습니다"); 
		else //숫자가 같더라도 안에 문자가 하나라도 다르면 "다릅니다" 출력 
			puts("다릅니다"); 
	}
	else //숫자가 다르면 아예 문자를 비교해볼 필요도 없어서 바로 "다릅니다" 출력 
		puts("다릅니다"); 
		
	return 0;
}
				
		
		
