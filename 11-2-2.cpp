#include <stdio.h>

int main(void)
{
	char str[50];
	int i, j=0;
	char tmp;
	
	scanf("%s", str);
	
	for(i=0; i<50; i++)
		if(str[i]==0)
			break;
	
	i--;
	
	while(1)
	{
		tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
		i--;
		j++;
		if(j>i)
			break;
	}
	
	printf("%s", str);
	
	return 0;
}
