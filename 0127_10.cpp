#include <stdio.h>

int main()
{
	char arr[50];
	int i;
	scanf("%s", arr);
	
	for(i=0; i<50; i++)
	{
		if(arr[i]=='\0')
			break;
	}
	
	printf("%d", i);
	
	return 0;
}
