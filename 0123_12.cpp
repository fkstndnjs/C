#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);
	
	if(num>=90)
		printf("A");
	else if(num>=80 && num<90)
		printf("B");
	else
		printf("F");
		
		
	return 0;
}
