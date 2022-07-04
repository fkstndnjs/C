#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ph
{
	char name[30];
	char number[30];
	struct ph* next;
} Phone;

Phone* Insert(Phone* curr)
{	
	Phone* phone = (Phone*)malloc(sizeof(Phone)); //새 Phone 구조체 생성 
	phone->next=NULL; //새로 생성된 next에는 NULL 삽입 
	curr->next=phone; //현재 curr의 next, 즉 curr 다음 노드의 위치는 이 함수에서 새로 생성된 구조체의 주소이므로 phone 삽입 
	
	printf("Input Name: ");
	scanf("%s", phone->name); //이름 입력 받음 
	
	printf("Input Tel Number: ");
	scanf("%s", phone->number); //번호 입력 받음 
	
	puts("Data Inserted");
	
	return phone;
}

void Delete(Phone* head)
{
	char str[30];
	Phone* curr=head->next;
	Phone* backward=head;
	puts("\n[Delete Data]");
	
	printf("name: "); //지울 데이터의 이름 입력 받음 
	scanf("%s", str);
	
	while(curr!=NULL) //curr가 NULL, 즉 끝 노드를 만날 때까지 반복하면서 삭제할 데이터 탐색 
	{
		if(!strcmp(curr->name, str)) //만약 삭제할 데이터의 이름을 찾으면 
		{
			backward->next=curr->next; //그 전 노드의 next에 현재 노드의 다음 위치를 삽입 
			free(curr); //현재 노드는 삭제할 노드, 더 이상 필요가 없는 노드이므로 free 
			break; //삭제할 이름을 찾았으므로 반복문 탈출 
		}
		backward=curr; //이제 curr가 한 노드 앞을 가리킬 것이므로 미리 backward에 현재 노드의 위치 저장 
		curr=curr->next; //curr을 한 노드 앞으로 이동 
	}
}

void Search(Phone* head)
{
	char str[30];
	Phone* curr=head->next; //curr를 선언하고 head다음 첫 번째 노드를 가리키게 만듦 
	
	puts("\n[Search Data]");
	
	printf("name: "); //찾을 이름 입력 받음 
	scanf("%s", str);
	
	while(curr!=NULL) //curr가 NULL, 즉 끝 노드를 만날 때까지 반복하면서 입력받은 str과 노드의 name값과 비교해 맞으면 그 구조체의 데이터 출력 
	{
		if(!strcmp(curr->name, str))
			printf("Name: %s, PhoneNum: %s\n", curr->name, curr->number);
		curr=curr->next;
	}
}

void Print(Phone* head)
{
	Phone* curr=head->next; //curr를 선언하고 head다음 첫 번째 노드를 가리키게 만듦 
	
	puts("\n[Print All Data]");
	
	while(curr!=NULL) //curr가 NULL, 즉 끝 노드를 만날 때까지 반복하면서 전체 구조체의 데이터 출력 
	{
		printf("Name: %s, PhoneNum: %s\n", curr->name, curr->number);
		curr=curr->next;
	}
}

int main(void)
{
	int num; //switch문 case 입력받을 변수 
	Phone* head=(Phone*)malloc(sizeof(Phone)); //연결 리스트 head생성
	head->next=NULL;
	Phone* curr=head; //head를 가리키는 curr 선언 
	
	while(1) 
	{
		puts("***** MENU *****");
		printf("1. INSERT\n2. DELETE\n3. SEARCH\n4. Print ALL\n5. Exit\nChoose the item: ");
		
		scanf("%d", &num); //case값 입력 받음 

		switch(num)
		{
			case 1:
				curr=Insert(curr);
				break;
			case 2:
				Delete(head);
				break;
			case 3:
				Search(head);
				break;
			case 4:
				Print(head);
				break;
			case 5:
				printf("\n프로그램이 종료됩니다\n"); 
				return 0;
		}
		
		printf("\n");
	}
}
