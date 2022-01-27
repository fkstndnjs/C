#include <stdio.h>

int main()
{
	char str[50];
	int i;
	char tmp;
	
	scanf("%s", str);
	
	for(i=0; i<50; i++)
	{
		if(str[i]=='\0')
			break;
	}
	
	printf("%s\n", str);
	
	i-=1;
	
	for(int j=0; j<i; j++)
	{
		tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
		i--;
	}
	
	printf("%s", str);
	
	return 0;
}
