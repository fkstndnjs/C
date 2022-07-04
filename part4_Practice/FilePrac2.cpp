#include <stdio.h>

int main(void)
{
	FILE* fp1=fopen("abu.jpg", "rb");
	FILE* fp2=fopen("BLONDBLOND.jpg", "wb");
	char str[30];
	int num;
	
	while(1)
	{
		num=fread((void*)str, 1, sizeof(str), fp1);
		
		if(num<sizeof(str))
		{
			if(feof(fp1)!=0)
			{
				fwrite((void*)str, 1, num, fp2);
				puts("성공");
				break;
			}
			else
				puts("실패");
			break;
		}
		
		fwrite((void*)str, 1, sizeof(str), fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
