#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point* pos1, Point* pos2)
{
	int tmp1, tmp2;
	
	tmp1=pos1->xpos;
	tmp2=pos1->ypos;
	
	pos1->xpos=pos2->xpos;
	pos1->ypos=pos2->ypos;
	
	pos2->xpos=tmp1;
	pos2->ypos=tmp2;
}

int main(void)
{
	Point pos1={2,4};
	Point pos2={5,7};
	
	SwapPoint(&pos1, &pos2);
	
	printf("%d, %d\n%d, %d", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	
	return 0;
}
