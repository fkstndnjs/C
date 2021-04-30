#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos={10,20};
	struct point* ptr=&pos;
	
	printf("%d, %d", (*ptr).xpos, ptr->xpos);
	
	return 0;
}
