#include <stdio.h>

typedef struct dbshort
{
	unsigned short upper;
	unsigned short lower;
} DB;

typedef union
{
	int iBuf;
	char bBuf[4];
	DB sBuf;
} RDBuf;

int main()
{
	RDBuf buf;
	printf("���� �Է�: ");
	scanf("%d", &(buf.iBuf));
	
	printf("���� 2����Ʈ: %u \n", buf.sBuf.upper);
	printf("���� 2����Ʈ: %u \n", buf.sBuf.lower);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[3]);
	
	return 0;
}