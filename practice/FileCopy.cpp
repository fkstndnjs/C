#include <stdio.h>

int main(void)
{
	FILE * src=fopen("12.jpeg", "rb");
	FILE * dst=fopen("12copy.jpeg", "wb");
	char buf[20];
	int readCnt;
	
	while(1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);
		
		if(readCnt<sizeof(buf))
		{
			if(feof(src)!=0)
			{
				fwrite((void*)buf, 1, readCnt, dst);
				break;
			}
			else
				puts("파일 복사 실패");
				break;
		}
		
		fwrite((void*)buf, 1, sizeof(buf), dst);
	}
	
	fclose(src);
	fclose(dst);
	
	return 0;
}
