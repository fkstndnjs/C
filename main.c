#include <stdio.h>

typedef struct div
{
	int quotient;
	int remainder;
} Div;

extern Div IntDiv(int num1, int num2);

int main(void)
{
	Div val = IntDiv(5,2);
	printf("%d, %d", val.quotient, val.remainder);
	
	return 0;
}
