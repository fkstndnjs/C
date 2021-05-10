#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
	FILE * fp1 = fopen(argv[1], "rt");
	FILE * fp2 = fopen(argv[2], "rt");
	
	char str1[50], str2[50];
	
	int tmp;
	
	while(fgets(str1, sizeof(str1), fp1)!=NULL)
	{
		fgets(str2, sizeof(str2), fp2);
		
		if(strcmp(str2, str1))
			tmp++;
	}
	
	if(tmp<1)
		puts("두 개의 파일은 완전히 일치 합니다.");
	else
		puts("두 개의 파일은 다릅니다.");
		
	return 0;
}
