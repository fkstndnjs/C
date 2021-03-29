#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[20];
	char str4[20];
	
	int i=0;
	int j=0;
	int cmp;
	int num1, num2;
	
	fgets(str1, 20, stdin);
	fgets(str2, 20, stdin);
	
	num1=strlen(str1);
	num2=strlen(str2);
	
	for(i; i<20; i++)
	{
		if(str1[i]==' ')
			break;
	}
	
	for(j; j<20; j++)
	{
		if(str2[j]==' ')
			break;
	}

	if(i!=j)
		puts("다릅니다"); 
	else
	{
		cmp=!strncmp(str1, str2, i);
	
		if(cmp==1)
			puts("같습니다");
	}
	
	i+=1;
	j+=1;
	
	int ag1=atoi(&str1[i]);
	int ag2=atoi(&str2[j]);
	
	printf("%d, %d\n\n", ag1, ag2);
	
	if(ag1==ag2)
		puts("같습니다");
	else
		puts("다릅니다"); 
	return 0;
}
	
	
