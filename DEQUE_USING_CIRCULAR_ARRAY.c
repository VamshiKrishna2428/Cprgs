#include<stdio.h>
#define N 5
int deque[N];
int front=-1,rear=-1;
void enqueue_front(int x){
	if((front==rear+1) || (front==0 && rear==N-1)){
		printf("Overflow\n");
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		deque[front]=x;
	}
	else if(front==0){
		front=N-1;
		deque[front]=x;
	}
	else{
		front--;
		deque[front]=x;
	}
}
void enqueue_rear(int x){
	if((front==rear+1) || (front==0 && rear==N-1)){
                printf("Overflow\n");
        }
	else if(front==-1 && rear==-1){
		front=rear=0;
		deque[rear]=x;
	}
	else if(rear==N-1){
		rear=0;
		deque[rear]=x;
	}
	else{
		rear++;
		deque[rear]=x;
	}
}
void display(){
	int i=front;
	if(front==-1 && rear==-1){
		printf("Underflow\n");
	}
	else{
		printf("The elements in the deque are:");
		while(i!=rear){
			printf("%d ,",deque[i]);
			i=(i+1)%N;
		}
		printf("%d\n",deque[rear]);
	}
}
void getfront(){
	if(front==-1 && rear==-1){
                printf("Underflow\n");
        }
	else{
		printf("The first element in deque is:%d\n",deque[front]);
	}
}
void getrear(){
	if(front==-1 && rear==-1){
                printf("Underflow\n");
        }
	else{
		printf("The last element in deque is:%d\n",deque[rear]);
	}
}
void dequeue_front(){
	if(front==-1 && rear==-1){
		printf("Underflow\n");
	}
	else if(front==rear){
		printf("The dequeued element is:%d\n",deque[front]);
		front=rear=-1;
	}
	else if(front==N-1){
		printf("The dequeued element is:%d\n",deque[front]);
		front=0;
	}
	else{
		printf("The dequeued element is:%d\n",deque[front]);
		front++;
		}
}
void dequeue_rear(){
	 if(front==-1 && rear==-1){
                printf("Underflow\n");
        }
	else if(front==rear){
                printf("The dequeued element is:%d\n",deque[rear]);
                front=rear=-1;
        }
	 else if(rear==0){
                printf("The dequeued element is:%d\n",deque[rear]);
                rear=N-1;
        }
	else{
		 printf("The dequeued element is:%d\n",deque[rear]);
		 rear--;
	}
}
void main(){
	enqueue_front(2);
	display();
	enqueue_front(5);
	display();
	enqueue_rear(-1);
	display();
	dequeue_front();
	display();
	enqueue_rear(1);
	display();
	enqueue_front(7);
	display();
	dequeue_rear();
	display();
	enqueue_front(4);
	display();
	getfront();
	getrear();
}



