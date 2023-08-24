#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left,*right;
};
struct node *create();
void preorder(struct node *root);
void postorder(struct node *root);
void inorder(struct node *root);

int main(){
	struct node *root,*temp;
	
	root=create();
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	return 0;
}
struct node *create(){
	struct node *root,*temp;
	int val,ch,ch2,ch3;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("\npress -1 to exit");
	scanf("%d",&ch);
	if(ch==-1){
		return 0;
	}
	else{
			printf("enter data:");
			scanf("%d",&val);
			temp->data=val;
			temp->left=NULL;
			temp->right=NULL;
			printf("\nenter the left child of %d",val);
			temp->left=create();
			printf("\nenter the right child of %d",val);
			temp->right=create();
			return(temp);
	}
		
}
void preorder(struct node *root){
	if(root==0){
		return;
	}
	else{
		printf("%d->",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(struct node *root){
	if(root==0){
		return;
		
	}
	else{
		inorder(root->left);
		printf("%d->",root->data);
		inorder(root->right);
	}
	
}
void postorder(struct node *root){
	if(root==0){
		return;
	}
	else{
		inorder(root->left);
		inorder(root->right);
		printf("%d->",root->data);
	}
}
