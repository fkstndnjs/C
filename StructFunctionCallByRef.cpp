#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

void Org(Point* ptr)
{
	ptr->xpos+=1;
	ptr->ypos-=1;
}

void Show(Point pos)
{
	printf("%d, %d \n", pos.xpos, pos.ypos);
}

int main(void)
{
	Point pos={5, 5};
	Org(&pos);
	Show(pos);
	Org(&pos);
	Show(pos);
	
	return 0;
}
	
