#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;

	srand((int)time(NULL));
	
	for(i=0; i<100; i++)
		printf("���� ���: %d \n", rand()%3);

	return 0;
}
