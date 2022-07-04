#include <stdio.h>
#include <string.h>

void EmtBuff()
{
	while(getchar()!='\n');
}

void RmvEnt(char str[])
{
	int num=strlen(str);
	str[num-1]=0;
}

struct employee
{
	char name[20];
	char jumin[20];
	int info;
};

int main()
{
	struct employee man[3]={0};
	
	for(int i=0; i<3; i++)
	{
		fgets(man[i].name, 20, stdin);
		RmvEnt(man[i].name);

		fgets(man[i].jumin, 20, stdin);
		RmvEnt(man[i].jumin);
	
		scanf("%d", &man[i].info);
		EmtBuff(); //이걸 안해주면 scanf를 입력하고 난 다음에 enter값이 입력 버퍼에 남아있어서 fgets함수가 읽어들임
	}
	
	printf("\n");
	
	for(int i=0; i<3; i++)
	{
		puts(man[i].name);
		puts(man[i].jumin);
		printf("%d\n\n", man[i].info);
	}
	
	return 0;
}
