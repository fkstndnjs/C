#include <stdio.h>

int main(void)
{
	FILE * src = fopen("abu.jpeg", "rb");
	FILE * dst = fopen("test.jpg", "wb");
	int readCnt;
	char buf[20];
	
	while(1)
	{ 
		readCnt=fread((void*)buf, 1, sizeof(buf), src);
		
		if(readCnt<sizeof(buf))
		{
			if(feof(src)!=0)
			{
				fwrite((void*)buf, 1, readCnt, dst);
				puts("파일복사완료");
				break;
			}
			else
				puts("파일복사실패");
			break;
		}
		
		fwrite((void*)buf, 1, sizeof(buf), dst);
	}
	
	fclose(src);
	fclose(dst);
	
	return 0;
}
