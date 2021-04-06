#include <stdio.h>

int main(void)
{
	FILE* my=fopen("mystory.txt", "wt");
	
	fputs("#이름: 유석현\n", my);
	fputs("#주민번호: 981016\n", my);
	fputs("#전화번호: 010\n", my);
	
	fclose(my);
	
	return 0;
}
