#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct
{
	Point left;
	Point right;
} Rectangle;

void ShowWidth(Rectangle rec)
{
	printf("%d\n\n", (rec.right.xpos-rec.left.xpos)*(rec.right.ypos-rec.left.ypos));
}

void ShowPos(Rectangle rec)
{
	printf("%d, %d, %d, %d\n\n", rec.left.xpos, rec.left.ypos, rec.right.xpos, rec.right.ypos);
}

int main(void)
{
	Rectangle rec={0, 0, 100, 100};
	
	ShowPos(rec);

	ShowWidth(rec);
	
	return 0;
}
