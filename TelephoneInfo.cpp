#include <stdio.h>
#include <string.h>
 
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person man1, man2;
	char str[20];
	
	strcpy(str, "À¯¼®Çö"); 
	
	fgets(man1.name, 20, stdin);
	printf("%s\n", "jki");
	puts(man1.name);
	puts(str);
	return 0;
}
