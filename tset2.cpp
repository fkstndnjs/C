#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	int age;
};

int main(void)
{
	struct person man={"ȫ�浿", 20};
	 
	printf("%s, %d", man.name, man.age);
	
	return 0;
}
