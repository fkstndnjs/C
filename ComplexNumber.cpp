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
	
	printf("���Ҽ� �Է�1[�Ǽ�, ���]: ");
	scanf("%lf %lf", &c1.shil, &c1.heo);
	printf("���Ҽ� �Է�2[�Ǽ�, ���]: ");
	scanf("%lf %lf", &c2.shil, &c2.heo);
	
	printf("���� ���] �Ǽ�: %g, ���: %g\n", c1.shil+c2.shil, c1.heo+c2.heo);
	printf("���� ���] �Ǽ�: %g, ���: %g", c1.shil*c2.shil-c1.heo*c2.heo, c1.heo*c2.shil+c1.shil*c2.heo);  
	 
	
	return 0;
}
