#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1={1, 2};
	struct point* ptr=&pos1;
	
	(*ptr).xpos+=4;
	(*ptr).ypos+=5;
	
	printf("%d, %d", ptr->xpos, ptr->ypos);
	
	return 0;
}
