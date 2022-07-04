#include <stdio.h>

int Max(int a, int b, int c)
{
	int max=a;
	int arr[3]={a,b,c};
	 
	for(int i=0; i<3; i++)
		max=max>arr[i]?max:arr[i];
}

int Min(int a, int b, int c)
{
	int min=a;
	int arr[3]={a,b,c};
	 
	for(int i=0; i<3; i++)
		min=min<arr[i]?min:arr[i];
}

int main(void)
{
	int num1, num2, num3;
	
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("%d, %d", Max(num1, num2, num3), Min(num1, num2, num3));
	
	return 0;
}
