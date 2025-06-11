#include <stdio.h>
#include <stdlib.h>

struct node{
        int data;
        struct node *prev;
        struct node *next;
}*head,*tail;

/*void CreateDCLL(){
        struct node *newnode;
        head = 0;
        int choice;
        do{
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data:");
                scanf("%d",&newnode -> data);

                if(head == 0){
                        head=tail=newnode;
			newnode -> next = newnode;
			newnode -> prev = newnode;
                }
                else{
                        newnode -> prev = tail;
                        newnode -> next = head;
                        tail -> next = newnode;
			head -> prev = newnode;
                        tail = newnode;
		}
           	printf("Do you want to insert another data (1/0)?:");
           	scanf("%d",&choice);
	}while(choice);
	Insert_At_Beginning();
}*/

void Display(){
	struct node *temp;
	temp = head;
	if(head == 0){
		printf("List is Empty\n");
	}
	else{
		printf("The data in list are:");
		do{
			printf("%d ,",temp -> data);
			temp = temp -> next;
		}while(temp != tail -> next);
	}
	printf("\n");
}

void Insert_At_Beginning(){
	struct node *newnode;
        head = 0;
        int choice;
        do{
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data:");
                scanf("%d",&newnode -> data);

                if(head == 0){
                        head=tail=newnode;
                        newnode -> next = newnode;
                        newnode -> prev = newnode;
                }
                else{
                        newnode -> prev = tail;
                        newnode -> next = head;
                        tail -> next = newnode;
                        head -> prev = newnode;
                        head = newnode;
                }
                printf("Do you want to insert another data (1/0)?:");
                scanf("%d",&choice);
        }while(choice);

}

void main(){
        //CreateDCLL();
	
	struct node{
        int data;
        struct node *prev;
        struct node *next;
}*head,*tail;

//void CreateDCLL(){
        struct node *newnode;
        head = 0;
        int choice;
        do{
                newnode = (struct node*) malloc(sizeof(struct node));
                printf("Enter data:");
                scanf("%d",&newnode -> data);

                if(head == 0){
                        head=tail=newnode;
                        newnode -> next = newnode;
                        newnode -> prev = newnode;
                }
                else{
                        newnode -> prev = tail;
                        newnode -> next = head;
                        tail -> next = newnode;
                        head -> prev = newnode;
                        tail = newnode;
                }
                printf("Do you want to insert another data (1/0)?:");
                scanf("%d",&choice);
        }while(choice);

	Display();
	Insert_At_Beginning();
	Display();
}
