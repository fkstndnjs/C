#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

void Show(Point pos)
{
	printf("%d, %d\n", pos.xpos, pos.ypos);
}

Point Get(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main(void)
{
	Point curPos=Get();
	Show(curPos);
	
	return 0;
}
