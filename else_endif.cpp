#include <stdio.h>
#define NUM 5

int main(void)
{
	#if NUM==5
		puts("��ũ�� ��� NUM�� 5�Դϴ�.");
	#else
		puts("��ũ�� ��� NUM�� 5�� �ƴմϴ�.");
	#endif
	
	return 0;
}
