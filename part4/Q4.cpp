#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
	FILE * fp = fopen(argv[1], "rt");
	
	int a=0, p=0;
	
	char str[50];
	
	while(fgets(str, sizeof(str), fp)!=NULL)
	{
		for(int i=0; i<strlen(str); i++)
		{
			if(i==0)
			{
				if(str[0]=='A')
					a++;
				else if(str[0]=='P')
					p++;
			}
			else
			{
				if(str[i]==' ')
				{
					if(str[i+1]=='A')
						a++;
					else if(str[i+1]=='P')
						p++;
				}
			}
		}
	}
	
	printf("A�� �����ϴ� �ܾ��� ��: %d\n", a);
	printf("P�� �����ϴ� �ܾ��� ��: %d\n", p);
	
	return 0;
}
