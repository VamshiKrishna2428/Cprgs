/*#include <stdio.h>
#define N 5
int stack[N];
int top = -1;
void push(){
	//int top;
	int x;
	printf("Enter data to push:");
	scanf("%d",&x);

	if(top>N-1){
		printf("Stack is full\n");
		return;
	}
	else{
		top++;
		stack[top] = x;
	}
}
void pop(){
	//int top;
	int item;
	if(top<0){
		printf("Stack is empty\n");
		return;
	}
	else{
		item = stack[top];
		top--;
		printf("The poped item is:%d\n",item);
	}
}
void peek(){
	//int top;
	if(top<0){
		printf("Stack is empty\n");
	}
	else{
		printf("The top element is:%d",stack[top]);
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("The elements in the stack are:%d, ",stack[i]);
	}
}

void main(){
	int choice;
	printf("Enter choice:\n 1.push\n 2.pop\n 3.peek\n 4.display\n");
	scanf("%d",&choice);
	do{
		switch(choice){
			case 1: push();
			        break;
			case 2: pop();
				break;
			case 3: peek();
				break;
			case 4: display();
				break;

			default : printf("Invalid choice\n");
		}
	}while(choice!=0);
}
*/    



#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
    printf("%d pushed to stack\n", value);
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (top < 0) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

void printStack() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    printStack();  // Stack elements: 30 20 10

    printf("Top element: %d\n", peek());  // Top element: 30

    printf("Popped element: %d\n", pop());  // Popped element: 30

    printStack();  // Stack elements: 20 10

    return 0;
}



