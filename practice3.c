/* #include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left,*right;
};
struct node *create(){
	struct node *newnode;
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data(-1 for no node)\n");
	scanf("%d",&x);
	if(x==-1){
		return 0;
	}
	else{
		newnode -> data = x;
	}
	printf("Enter left child of %d\n",x);
	newnode -> left = create();
	printf("Enter right child of %d\n",x);
	newnode -> right = create();
	return newnode;
}
void preorder(struct node *root){
	if(root==0){
		return;
	}
	else{
		printf("%d ,",root -> data);
		preorder(root -> left);
		preorder(root -> right);
	}
}
void main(){
	struct node *root;
	root=0;
	root=create();
	preorder(root);
}*/







#include<stdio.h>
#include<stdlib.h>
void main(){
	struct node{
		int data;
		struct node* next;
	};
	struct node* newnode, *temp, *head;
	int data,choice,count=0;
	do{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d",&newnode -> data);
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next = newnode;
			temp=newnode;
		}
		printf("Do you want to continue(1/0)?:");
		scanf("%d",&choice);
	}while(choice);
	temp=head;
	while(temp!=0){
		printf("%d, ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

