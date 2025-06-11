#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x){
	if(rear==N-1){
		printf("Overflow\n");	
	}
	else if(rear == -1 && front == -1){
		front = rear = 0;
		queue [rear] = x;
	}
	else{
		rear++;
		queue[rear] = x;
	}
}
void dequeue(){
	if(front == -1 && rear == -1){
		printf("Underflow\n");
	}
	else if(front == rear){
		front = rear = -1;
	}
	else{
		printf("The dequeued data is:%d\n",queue[front]);
		front++;
	}
}
void display(){
	int i;
	if(front == -1 && rear == -1){
		printf("Underflow\n");
	}
	else{
		printf("The data in the queue is:");
		for(i=front;i<rear+1;i++){
			printf("%d ,",queue[i]);
		}
	}
	printf("\n");
}
void peek(){
	if(front == -1 && rear == -1){
		printf("Underflow\n");
	}
	else{
		printf("The first data in queue is:%d\n",queue[front]);
	}
}


void main(){
	enqueue(2);
	enqueue(4);
	enqueue(-8);
	peek();
	display();
	dequeue();
	peek();
	display();
}


