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
	Phone* phone = (Phone*)malloc(sizeof(Phone)); //�� Phone ����ü ���� 
	phone->next=NULL; //���� ������ next���� NULL ���� 
	curr->next=phone; //���� curr�� next, �� curr ���� ����� ��ġ�� �� �Լ����� ���� ������ ����ü�� �ּ��̹Ƿ� phone ���� 
	
	printf("Input Name: ");
	scanf("%s", phone->name); //�̸� �Է� ���� 
	
	printf("Input Tel Number: ");
	scanf("%s", phone->number); //��ȣ �Է� ���� 
	
	puts("Data Inserted");
	
	return phone;
}

void Delete(Phone* head)
{
	char str[30];
	Phone* curr=head->next;
	Phone* backward=head;
	puts("\n[Delete Data]");
	
	printf("name: "); //���� �������� �̸� �Է� ���� 
	scanf("%s", str);
	
	while(curr!=NULL) //curr�� NULL, �� �� ��带 ���� ������ �ݺ��ϸ鼭 ������ ������ Ž�� 
	{
		if(!strcmp(curr->name, str)) //���� ������ �������� �̸��� ã���� 
		{
			backward->next=curr->next; //�� �� ����� next�� ���� ����� ���� ��ġ�� ���� 
			free(curr); //���� ���� ������ ���, �� �̻� �ʿ䰡 ���� ����̹Ƿ� free 
			break; //������ �̸��� ã�����Ƿ� �ݺ��� Ż�� 
		}
		backward=curr; //���� curr�� �� ��� ���� ����ų ���̹Ƿ� �̸� backward�� ���� ����� ��ġ ���� 
		curr=curr->next; //curr�� �� ��� ������ �̵� 
	}
}

void Search(Phone* head)
{
	char str[30];
	Phone* curr=head->next; //curr�� �����ϰ� head���� ù ��° ��带 ����Ű�� ���� 
	
	puts("\n[Search Data]");
	
	printf("name: "); //ã�� �̸� �Է� ���� 
	scanf("%s", str);
	
	while(curr!=NULL) //curr�� NULL, �� �� ��带 ���� ������ �ݺ��ϸ鼭 �Է¹��� str�� ����� name���� ���� ������ �� ����ü�� ������ ��� 
	{
		if(!strcmp(curr->name, str))
			printf("Name: %s, PhoneNum: %s\n", curr->name, curr->number);
		curr=curr->next;
	}
}

void Print(Phone* head)
{
	Phone* curr=head->next; //curr�� �����ϰ� head���� ù ��° ��带 ����Ű�� ���� 
	
	puts("\n[Print All Data]");
	
	while(curr!=NULL) //curr�� NULL, �� �� ��带 ���� ������ �ݺ��ϸ鼭 ��ü ����ü�� ������ ��� 
	{
		printf("Name: %s, PhoneNum: %s\n", curr->name, curr->number);
		curr=curr->next;
	}
}

int main(void)
{
	int num; //switch�� case �Է¹��� ���� 
	Phone* head=(Phone*)malloc(sizeof(Phone)); //���� ����Ʈ head����
	head->next=NULL;
	Phone* curr=head; //head�� ����Ű�� curr ���� 
	
	while(1) 
	{
		puts("***** MENU *****");
		printf("1. INSERT\n2. DELETE\n3. SEARCH\n4. Print ALL\n5. Exit\nChoose the item: ");
		
		scanf("%d", &num); //case�� �Է� ���� 

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
				printf("\n���α׷��� ����˴ϴ�\n"); 
				return 0;
		}
		
		printf("\n");
	}
}
