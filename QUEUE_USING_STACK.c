#include<stdio.h>
#define N 5
int s1[N], s2[N];
int top1 = -1, top2 = -1;
int count = 0;
void push1(int data){
	if(top1==N-1){
		printf("Overflow\n");
	}
	else{
		top1++;
		s1[top1]=data;
	}
}
void push2(int data){
	 if(top2==N-1){
                printf("Overflow\n");
        }
        else{
                top2++;
                s2[top2]=data;
        }
}
int pop1(){
	return s1[top1--];
}
int pop2(){
        return s2[top2--];
}
void enqueue(int x){
        push1(x);
        count++;
        printf("The number of elements in queue are:%d\n",count);
}
void dequeue(){
	int i,a,b;
	if(top1==-1 && top2==-1){
		printf("Underflow\n");
	}
	else{
		for(i=0;i<count;i++){
			a=pop1();
			push2(a);
		}
		b=pop2();
		printf("The poped data is:%d\n",b);
		count--;
		for(i=0;i<count;i++){
                        a=pop2();
                        push1(a);
                }
	}
}
void display(){
	int i;
	printf("The elements in the queue are:");
	for(i=0;i<=top1;i++){
		printf("%d ,",s1[i]);
	}
	printf("\n");
}
void main(){
	enqueue(9);
	enqueue(4);
	enqueue(-6);
	display();
	dequeue();
	display();
}

