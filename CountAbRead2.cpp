#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp=fopen("text.txt", "rt");
	char str[100]={0};
	int acount=0;
	int pcount=0;
	
	while((fgets(str, sizeof(str), fp)!=NULL))
	{
		printf("읽어들인 문자열: %s\n", str); //읽어들인 문자열 출력 
		
		int index[10]={0}; //fgets해서 문자열을 읽어올 때마다 문자열의 공백 인덱스를 넣는 배열, 반복마다 초기화 하기 위해 while문 안에 선언 
		int j=1; //반복마다 초기화 하기 위해 while문 안에 선언, 1부터 시작한 이유는 index[0]에는 무조건 str[0]이 들어가야되기 때문 
		
		for(int i=0; i<sizeof(str); i++) //읽어들인 문자열이 저장되어 있는 str배열에 접근해서 공백이 있는 인덱스를 index배열에 저장 
		{
			if(str[i]==' ') //공백이면 
			{
				index[j]=i+1; //공백 다음 인덱스, 즉 단어가 시작하는 인덱스를 index[j]에 저장 
				j++; //j 하나 증가 
			}
			else if(str[i]=='\n') //문자열의 끝인 개행문자가 나오면 for문 탈출, 굳이 sizeof(str)만큼 반복할 필요 없음 
				break;
		}
		
		printf("문자열의 공백 인덱스: "); 
		for(int i=0; i<sizeof(index)/sizeof(int); i++) //index배열 출력 
		{
			printf("%d ", index[i]); 
		}
		
		printf("\n\n");
		
		
		for(int i=0; i<sizeof(index)/sizeof(int); i++) //A혹은 P로 시작하면 acount, pcount를 각각 증가 시키는 반복문 
		{
			if(i>0 && index[i]==0) //index[0]도 0이고, 반복하다가 나중에 공백 인덱스를 저장한 값이 끝나면 index를 앞에서 0으로 초기화 했으므로
				break;             //또 0이 나오기 떄문에 밑에서 str[index[i]]가 str[0]이 되어서 또 카운트를 증가시키기 때문에 조건으로 막음과 동시에 탈출문 
			else
			{
				if(str[index[i]]=='A') //A로 시작하면 acount 증가 
					acount++;
				else if(str[index[i]]=='P') //P로 시작하면 pcount 증가 
					pcount++;
			}
		}
	}
	
	printf("A로 시작하는 단어의 수: %d\nP로 시작하는 단어의 수: %d\n", acount, pcount); 
	
	return 0;
}
