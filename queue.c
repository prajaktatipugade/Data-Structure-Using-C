
#include<stdio.h>
#include<stdlib.h>
#define N 10
int queue[N];
int front=-1;
int rear=-1;

void Enqueue();
void Dequeue();
void show();
void peek();

int main(){
	int ch;
	

	do{
		printf("Enter choice: \n 1:Enqueue  2:Dequeue 3.show 4.peek \t:");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1:
				Enqueue();
			 	break;
			case 2:
				Dequeue();
				break;
			case 3:
				show();
				break;
			case 4:
				peek();
				break;
			default:
				printf("Invalid input!!");
		
		}
			
			
	}while(ch!=0);
	
	return 0;
	
}
void Enqueue(){
	int data;
	if(rear == N-1 ){
		
		printf("queue is overflow");
		
	}
	else{
			printf("Enter Data:");
			scanf("%d",&data);
			if(front==-1){
				front=0;
			}
			rear++;
			queue[rear]=data;
		
			
	}
}
void Dequeue(){
	if(front ==-1 || front>rear){
		
		printf("queue underflow");
		
	}
	else{
		
		int x;
		x=queue[front];
		printf("deleted element:%d",x);
		front++;
		
	}
	
}
void show(){
	int i;	
	for(i=front;i>=rear;i++){
		printf("%d\t",queue[i]);
	}

}
void peek(){
	int x;
	x=queue[front];
	printf("Peek element:%d",x);
	printf("\n");
}

