#include <stdio.h>

typedef struct
{
	int x;
	int y;
} Point;

typedef struct
{
	Point cen;
	double rad;
} Circle;

void Show(Circle* cptr)
{
	printf("%d, %d\n", cptr->cen.x, cptr->cen.y);
	printf("%g \n", cptr->rad);
}

int main(void)
{
	Circle c1 = {1, 2, 3.5};
	
	Show(&c1);

	return 0;
}
