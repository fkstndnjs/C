#include <stdio.h>
#include "stdiv.h"
#include "intdiv.h"

int main(void)
{
	Div val=IntDiv(5, 2);
	printf("%d, %d", val.quotient, val.remainder);
	return 0;
}
