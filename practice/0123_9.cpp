#include <stdio.h>

int main()
{
	int num;
	int sum=1;
	
	scanf("%d", &num);
	
	for(int i=1; i<num+1; i++)
		sum*=i;
		
	printf("%d", sum);
	
	return 0;
}
