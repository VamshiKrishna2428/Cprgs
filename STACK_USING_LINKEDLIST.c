#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};
struct node *top=0;
void push(int x){
	struct node *newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode -> data = x;
	newnode -> link = top;
	top = newnode;
}
void display(){
	struct node *temp;
	temp=top;
	if(top==0){
		printf("Stack is empty\n");
	}
	else{
		printf("The data in the stack is:");
		while(temp != 0){
			printf("%d ,",temp -> data);
			temp = temp -> link;
		}
		printf("\n");
	}
}
void peek(){
	if(top==0){
		printf("Stack is empty\n");
	}
	else{
		printf("The top most data is:%d\n",top -> data);
	}
}
void pop(){
	struct node *temp;
	if(top==0){
		printf("Stack is empty\n");
	}
	else{
		temp = top;
		top = temp -> link;
		printf("The poped data is:%d\n",temp -> data);
		free(temp);
	}
}
void main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	peek();
	pop();
	display();
	pop();
        display();
	peek();
}

