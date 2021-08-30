#include <stdio.h>

typedef enum syllable
{
	Do=1, Re=2, Mi=3
} Syllable;

int main(void)
{
	Syllable tone;

	tone=Do;
	
	printf("%d", tone);
	
	return 0;
}
