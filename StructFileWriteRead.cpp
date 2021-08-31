#include <stdio.h>

typedef struct
{
	char name[10];
	char sex;
	int age;
} Friend;

int main(void)
{
	FILE * fp;
	Friend f1;
	Friend f2;
	
	fp=fopen("friend.bin", "wb");
	printf("이름, 성별, 나이순 입력: ");
	scanf("%s %c %d", f1.name, &f1.sex, &f1.age);
	fwrite((void*)&f1, sizeof(Friend), 1, fp);
	fclose(fp);
	
	fp=fopen("friend.bin", "rb");
	fread((void*)&f2, sizeof(Friend), 1, fp);
	printf("%s, %c, %d", f1.name, f1.sex, f1.age);
	fclose(fp);
	
	return 0;
}
