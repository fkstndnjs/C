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
		puts("�� ���� ������ ������ ��ġ �մϴ�.");
	else
		puts("�� ���� ������ �ٸ��ϴ�.");
		
	return 0;
}
