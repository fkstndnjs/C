#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* my = fopen("mystory.txt", "at");
	
	fputs("#��ܸԴ� ����: «��, ������\n", my);
	
	return 0;
}
