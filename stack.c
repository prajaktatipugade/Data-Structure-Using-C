
#include<stdio.h>
#include<stdlib.h>
#define N 50
int stack[N];
int top=-1;

void push();
void pop();
void display();
void peek();

int main(){
	int ch;

	do{
		printf("Enter choice: \n 1:push  2:pop 3.display 4.peek \t:");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1:
				push();
			 	break;
			case 2:
				pop();
				break;
			case 3:
				display();
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
void push(){
	int data;
	if(top == N -1){
		
		printf("Stack is overflow");
		
	}
	else{
		printf("Enter Data:");
		scanf("%d",&data);
		top++;
		stack[top]=data;
	}
}
void pop(){
	if(top  ==-1){
		
		printf("Stack underflow");
		
	}
	else{
		
		int x;
		x=stack[top];
		printf("deleted element:%d",x);
		top--;
		
	}
	
}
void display(){
	int i;	
	for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
	}

}
void peek(){
	int x;
	x=stack[top];
	printf("Peek element:%d",x);
	printf("\n");
}

