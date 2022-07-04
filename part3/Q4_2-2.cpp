#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) cvhhb 
{
	int i;
	srand((int)time(NULL));
	
	for(i=0; i<5; i++)
		printf("%d\n", rand()%100);
	
	return 0;
}
