#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
	struct point * ptr;
};

int main()
{
	struct point pos1={1,1};
	struct point pos2={2,2};
	struct point pos3={3,3};
	
	pos1.ptr=&pos2;
	pos2.ptr=&pos3;
	pos3.ptr=&pos1;
	
	printf("점의 연결관계..\n");
	
	printf("%d, %d와 %d, %d 연결", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	
	return 0;
}
