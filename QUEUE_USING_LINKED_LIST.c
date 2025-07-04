#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue(int x){
	struct node *newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode -> data = x;
	newnode -> next = 0;
	 
	if(front == 0 && rear ==0){
		front = rear = newnode;
	}
	else{
		rear -> next = newnode;
		rear = newnode;
	}
}
void display(){
	struct node *temp;
	if(front == 0 && rear == 0){
		printf("Underflow\n");
	}
	else{
		printf("The data in the queue is:");
		temp = front;
		while(temp != 0){
			printf("%d ,",temp -> data);
			temp = temp -> next;
		}
	}
	printf("\n");
}
void dequeue(){
	struct node *temp;
	if(front==0 && rear==0){
		printf("Underflow\n");
	}
	else{
		temp = front;
		printf("The dequeued data is:%d\n",front -> data);
		front = front -> next;
		free(temp);
	}
}
void peek(){
	if(front==0 && rear==0){
		printf("Underflow\n");
	}
	else{
		printf("The first data in the queue is:%d\n",front -> data);
	}
}
void main(){
	enqueue(9);
	enqueue(4);
	enqueue(8);
	peek();
	display();
	dequeue();
	peek();
	display();
}



