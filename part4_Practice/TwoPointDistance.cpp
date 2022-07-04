#include <stdio.h>
#include <math.h>

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1, pos2;
	double distance;
	int num1, num2;
	
	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);
	
	printf("%d %d\n", pos1.xpos, pos1.ypos);
	
	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);
	
	printf("%d %d\n", pos2.xpos, pos2.ypos);
	
	num1= pos1.xpos-pos2.xpos;
	num2= pos1.ypos-pos2.ypos;
	
	distance=sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));
	
	printf("°Å¸®: %f", distance);
	
	return 0;
}
