#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

void Func(Point* pos)
{
	printf("%d", pos->xpos);
}

int main(void)
{
	Point pos={1,2};
	
	Func(&pos);
	
	return 0;
}
