#include <stdio.h>
typedef enum
{
	Do=1, Re=2, Mi=3
} Syllable;

void Sound(Syllable sy)
{
	switch(sy)
	{
		case Do:
			puts("µµ");
			return;
		case Re:
			puts("·¹");
			return;
		case Mi:
			puts("¹Ì");
			return;
	}
}

int main(void)
{
	Syllable tone;
	
	tone=Mi;
	
	printf("%d", tone);
	Sound(tone);
		
	return 0;
}
