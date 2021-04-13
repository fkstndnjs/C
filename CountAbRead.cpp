#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp=fopen("text.txt", "rt");
	char str[100]={0};
	int j=0;
	int acount=0;
	int pcount=0;
	
	while((fgets(str, sizeof(str), fp)!=NULL))
	{
		printf("읽어들인 문자열: %s\n", str); //읽어들인 문자열 출력 
		
		int index[10]={0}; //fgets해서 문자열을 읽어올 때마다 문자열의 공백 인덱스를 넣는 배열, 반복마다 초기화 하기 위해 while문 안에 선언 
		
		for(int i=0; i<sizeof(str); i++) //읽어들인 문자열이 저장되어 있는 str배열에 접근해서 공백이 있는 인덱스를 index배열에 저장 
		{
			if(str[i]==' ')
			{
				index[j]=i;
				j++;
			}
			else if(str[i]=='\n') //문자열의 끝인 개행문자가 나오면 for문 탈출 
				break;
		}
		
		printf("문자열의 공백 인덱스: "); 
		for(int i=0; i<sizeof(index)/sizeof(int); i++) //index배열 출력 
		{
			if(index[i]==0)
				break;
			printf("%d ", index[i]); 
		}
		
		printf("\n\n");
		
		j=0; //j값을 초기화하여 다음 줄을 받을 때 또 사용 
		
		if(str[0]=='A')
			acount++;
		else if(str[0]=='P')
			pcount++;
		
		for(int i=0; i<sizeof(index)/sizeof(int); i++)
		{
			if(str[index[i]+1]=='A')
				acount++;
			else if(str[index[i]+1]=='P')
				pcount++;
		}
		
	}
	
	printf("A로 시작하는 단어의 수: %d\nP로 시작하는 단어의 수: %d\n", acount, pcount); 
	
	return 0;
}
