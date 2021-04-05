#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
};

int main(void)
{
	struct person man;
	
	//man.name="유석현"
	
	strcpy(man.name, "유석현");
	
	//strcpy로 문자열을 배열에 넣는 이유
	//문자열은 임의의 메모리공간에 저장되어 그 주소값을 반환
	//man1.name은 주소값을 변경 못하는 상수 형태의 포인터 변수
	//따라서 man1.name="문자열"은 컴파일 에러
	//strcpy(char* ~, char* ~)이므로 strcpy(man1.name, 문자열)로 문자열을 배열에 삽입 
	
	puts(man.name);
	
	return 0;
}
