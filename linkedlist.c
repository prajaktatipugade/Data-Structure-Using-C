#include<stdio.h>
#include<stdlib.h>
void create();
void insert();
void delete();
void display();
void at_begin_insert();
void at_end_insert();
void at_middle_insert();
void at_begin_delete();
void at_end_delete();
void at_middle_delete();
struct node{
int data;
struct node *next;
};
int main(){

int ch1,ch2;
//head=0;
do{
	printf("Enter choise: 1.insert 2.create 3.delete 4.display: ");
	scanf("%d",&ch1);
	switch(ch1){
				case 1:
							insert();
								break;
                case 2:
							create();
							break;
			    case 3:
							delete();
							break;
				case 4:
							display();
							break;
				default:
							printf("invalid input!!");

				}
							printf("Do you want perform operation:(0,1)");
							scanf("%d",&ch2);
			}while(ch2);

			return 0;
}
void create(){
		

		int ch2;
		head=0;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0){
				head=temp=newnode;
		}
		else{
				temp->next=newnode;
				temp=newnode;
		
		}

}
void display(){
	temp=head;
	while(temp!=0){
	printf("%d\t",temp->data);
	temp=temp->next;
	}

}
void delete(){
    int ch3;
    printf("Enter choise: 1.at_begin_delete 2.at_end_delete 3.at_middle_delete:");
	scanf("%d",&ch3);
	switch(ch3){
		case 1:
			at_begin_delete();
			break;
		case 2:
			at_end_delete();
			break;
		case 3:
			at_middle_delete();
			break;
		default:
			printf("invalid input!!"); 
	}

}


void insert(){
	int ch4;
	printf("Enter choise: 1.at_begin_insert 2.at_end_insert 3.at_middle_insert:");
	scanf("%d",&ch4);
	switch(ch4){
		case 1:
			at_begin_insert();
			break;
		case 2:
			at_end_insert();
			break;
		case 3:
			at_middle_insert();
			break;
		default:
				printf("invalid input!!");

	}

}
void at_begin_insert(){

	struct node* head,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;

}
void at_end_insert(){

	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&newnode->data);
	temp=head;
	while(temp->next!=0){
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=0;

}
void at_middle_insert(){

	struct node* prev;
	int i,pos;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter position:");
	scanf("%d",&pos);
	printf("enter data");
	scanf("%d",&newnode->data);
	temp=head;
	while(i<pos){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;

}
void at_begin_delete(){
	if(head==0){
		printf("list is empty");
	}
	else{
		temp=head;
		head=head->next;
		free(temp);
	}
}
void at_end_delete(){
	struct node* prev;
	
	while(temp->next != 0){
		prev=temp;
		temp=temp->next;
	
	}
	if(head==temp){
		head=0;
	}
	else{
		prev->next=0;
	}

}
void at_middle_delete(){
	int i;
	int pos;
	temp=head;
	printf("Enter position:");
	scanf("%d",&pos);
	while(i<=pos-1){
			temp=temp->next;

	}
	newnode=temp->next;
	temp->next=newnode->next;
	free(newnode);
}
