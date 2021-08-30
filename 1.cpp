#include <stdio.h>

int main(void)
{
	char str1[5];
	char str2[5];
	
	scanf("%s", str1);
	fgets(str2, sizeof(str2), stdin);
	
	printf("%s\n", str1);
	printf("%s", str2);
	
	return 0;
}
