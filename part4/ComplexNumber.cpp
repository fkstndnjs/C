#include <stdio.h>
#include <math.h>

typedef struct
{
	double shil;
	double heo;
} Com;

int main(void)
{
	Com c1;
	Com c2;
	
	printf("복소수 입력1[실수, 허수]: ");
	scanf("%lf %lf", &c1.shil, &c1.heo);
	printf("복소수 입력2[실수, 허수]: ");
	scanf("%lf %lf", &c2.shil, &c2.heo);
	
	printf("합의 결과] 실수: %g, 허수: %g\n", c1.shil+c2.shil, c1.heo+c2.heo);
	printf("곱의 결과] 실수: %g, 허수: %g", c1.shil*c2.shil-c1.heo*c2.heo, c1.heo*c2.shil+c1.shil*c2.heo);  
	 
	
	return 0;
}
