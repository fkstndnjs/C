#include <stdio.h>

int main(void)
{
	FILE* fp=fopen("mystory.txt", "rt");
	char arr[256];
	
	while(fgets(arr, 256, fp)!=NULL)
		puts(arr);
	
	return 0;
}
