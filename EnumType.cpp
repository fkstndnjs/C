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
			puts("��");
			return;
		case Re:
			puts("��");
			return;
		case Mi:
			puts("��");
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
