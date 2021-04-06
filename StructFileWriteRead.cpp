#include <stdio.h>

typedef struct
{
	char name[10];
	char sex;
	int age;
} Friend;

int main(void)
{
	FILE* fp;
	Friend m1;
	Friend m2;
	
	fp=fopen("friend.bin", "wb");
	printf("이름, 성별, 나이 순 입력: ");
	scanf("%s %c %d", m1.name, &(m1.sex), &(m1.age));
	fwrite((void*)&m1, sizeof(Friend), 1, fp);
	fclose(fp);
	
	fp=fopen("friend.bin", "rb");
	fread((void*)&m2, sizeof(Friend), 1, fp);
	printf("%s %c %d \n", m2.name, m2.sex, m2.age);
	fclose(fp);
	
	return 0;
}
