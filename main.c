#include <stdio.h>
#include <stdlib.h>
#include "stdiv2.h"
#include "intdiv4.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Div val=IntDiv(5, 2);
	printf("%d", val.quotient);
	printf("%d", val.remainder);
	
	return 0;
}
