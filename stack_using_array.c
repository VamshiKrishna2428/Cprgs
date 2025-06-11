#include <stdio.h>
#define MAX_SIZE 100
struct Stack{
        int data[MAX_SIZE];
        int top;
};
// intitialize stack
void initStack(struct Stack *stack){
        stack->top = -1;
}
// check stack is empty
int isEmpty(struct Stack *stack){
        return stack->top==-1;
}
// check stack is full
int isFull(struct Stack *stack){
        return stack->top==MAX_SIZE-1;
}
// peek element of stack
int peek(struct Stack *stack){
        if(isEmpty(stack)){
                printf("Stack is empty\n");
                return-1;
        }
                return stack->data[stack->top];
}
// pop a element from stack
 int pop(struct Stack *stack){
         if(isEmpty(stack)){
                 printf("Stack is empty\n");
                 return -1;
 }
                 int poppedValue = stack->data[stack->top];
                 stack->top--;
                 return poppedValue;
 }
// push a element into stack
void push(struct Stack *stack,int value){
        if(isFull(stack)){
                printf("stack is full\n");
                return;
        }
                stack->top++;
                stack->data[stack->top]=value;
                printf("pushed %d onto the stack\n",value);
}
void display(struct Stack *stack){
        if(isEmpty(stack)){
                printf("Stack is empty\n");
                return;
        }
                printf("stack elements are:");
                for(int i=stack->top;i>=0;i--){
                        printf("%d,",stack->data[i]);
        }
        printf("\n");
}
int main(){
        struct Stack stack;
        initStack(&stack);

        push(&stack,10);
        push(&stack,20);
        push(&stack,30);
        push(&stack,40);
        push(&stack,50);

        display(&stack);

        int poppedValue = pop(&stack);
        if(poppedValue !=-1){
                printf("popped value: %d\n",poppedValue);
        }
        int peekedValue = peek(&stack);
        if(peekedValue != -1){
                printf("peeked value:%d\n",peekedValue);
        }
        display(&stack);
        return 0;
}
