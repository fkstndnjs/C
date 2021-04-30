#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
	struct point* ptr;
};

int main(void)
{
	struct point pos1={1,1};
	struct point pos2={2,2};
	
	pos1.ptr=&pos2;
	pos2.ptr=&pos1;
	
	printf("%d, %d, %d, %d\n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("%d, %d, %d, %d", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	
	return 0;
}
