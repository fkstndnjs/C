#include <stdio.h>

int main(void)
{
	int ch;
	int A='A', Z='Z', a='a';
	ch=getchar();
	
	if('A'<=ch && ch<='Z')
		putchar(ch+32);
	else if('a'<=ch && ch<='z')
		putchar(ch-32);
	else
		printf("���ĺ� �̿��� �����Դϴ�.");
		 
	return 0;
}
