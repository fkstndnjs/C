#include <stdio.h>

int main()
{
	int num1, num2;
	int sum=0;
	
	scanf("%d %d", &num1, &num2);
	
	for(int i=num1; i<num2+1; i++)
		sum+=i;
		
	printf("%d", sum);
	
	return 0;
}
