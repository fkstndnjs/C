#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp=fopen("text.txt", "wt");
	
	fputs("Apple King Peach Akon Union Party\n", fp);
	fputs("Paris Gig Jax Ak47\n", fp);
	
	fclose(fp);
	return 0;
}
