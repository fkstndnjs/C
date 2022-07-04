#include <stdio.h>

typedef struct
{
	char name[20];
	char phoneNum[20];
	int age;
} Person;

void Show(Person man)
{
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

Person Read(void)
{
	Person man;
	scanf("%s %s %d", man.name, man.phoneNum, &man.age);
	return man;
}

int main(void)
{	
	Person man=Read();
	Show(man);
	
	return 0;
}
