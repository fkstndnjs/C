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
				puts("���Ϻ���Ϸ�");
				break;
			}
			else
				puts("���Ϻ������");
			break;
		}
		
		fwrite((void*)buf, 1, sizeof(buf), dst);
	}
	
	fclose(src);
	fclose(dst);
	
	return 0;
}
