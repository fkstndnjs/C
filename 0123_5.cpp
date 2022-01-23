#include <stdio.h>

int main()
{
	int set;
	int sum=0;
	int i=0;
	int num;
	
	scanf("%d", &set);
	
	while(i<set)
	{
		scanf("%d", &num);
		sum+=num;
		
		i++;
	}
	
	printf("%f", (double)sum/set);
	
	return 0;
}
