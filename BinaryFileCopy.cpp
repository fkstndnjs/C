#include <stdio.h>

int main(void)
{
	FILE * src=fopen("abu.jpeg", "rb");
	FILE * des=fopen("abu2.jpeg", "wb");
	char buf[20];
	int readCnt;
	
	while(1)
	{
		readCnt=fread((void*)buf, 1, sizeof(buf), src);
		
		if(readCnt<sizeof(buf))
		{
			if(feof(src)!=0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("���Ϻ���Ϸ�");
				break;
			}
			else
				puts("���Ϻ������");
				break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	
	fclose(src);
	fclose(des);
	
	return 0;
}
