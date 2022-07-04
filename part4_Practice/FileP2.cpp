#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* my = fopen("mystory.txt", "at");
	
	fputs("#Áñ°Ü¸Ô´Â À½½Ä: Â«»Í, ÅÁ¼öÀ°\n", my);
	
	return 0;
}
