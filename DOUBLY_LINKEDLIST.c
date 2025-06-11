#include <stdio.h>
#include <stdlib.h>
struct node{
                int data;
                struct node *prev;
                struct node *next;
        };
        struct node *head,*tail,*newnode,*temp;
/*void CreateList(){
	struct node{
		int data;
		struct node *prev;
		struct node *next;
	};
	struct node *head,*tail,*newnode,*temp;
	head = 0;
	int choice;
	do{
		newnode = (struct node*) malloc(sizeof(struct node));

		printf("Enter data:");
		scanf("%d",&newnode -> data);
		newnode -> prev = 0;
		newnode -> next = 0;

		if(head == 0){
			head=temp=tail=newnode;
		}
		else{
			temp -> next = newnode;
			newnode -> prev = temp;
			temp = tail = newnode;
		}
		printf("Do you want to insert another data (1/0)?:");
		scanf("%d",&choice);
	}while(choice);
	temp = head;
	printf("The data in the list are:");
        while(temp != 0){
                printf("%d ,",temp -> data);
                temp = temp -> next;
        }
	printf("\n");
}*/

void Insert_at_Beginning(){
	/*struct node{
                int data;
                struct node *prev;
                struct node *next;
        };
        struct node *head,*tail,*temp,*newnode;*/
        head = 0;
        int choice;
        do{
                newnode = (struct node*) malloc(sizeof(struct node));

                printf("Enter data:");
                scanf("%d",&newnode -> data);
                newnode -> prev = 0;
                newnode -> next = 0;

		if(head == 0){
			head = tail = newnode;
		}
		else{
			newnode -> next = head;
			head -> prev = newnode;
			head = newnode;
		}
		 printf("Do you want to insert another data (1/0)?:");
                scanf("%d",&choice);
        }while(choice);
}

void Insert_at_End(){
	 int choice;
        do{
                newnode = (struct node*) malloc(sizeof(struct node));

                printf("Enter data:");
                scanf("%d",&newnode -> data);
                newnode -> prev = 0;
                newnode -> next = 0;

                if(head == 0){
                        head = tail = newnode;
                }
                else{
			newnode -> prev = tail;
			tail -> next = newnode;
			tail = newnode;
		}
		 printf("Do you want to insert another data (1/0)?:");
                scanf("%d",&choice);
        }while(choice);
}

void Display(){
	temp = head;
        printf("The data in the list are:");
        while(temp != 0){
                printf("%d ,",temp -> data);
                temp = temp -> next;
        }
        printf("\n");
}

void main(){
	//CreateList();
	struct node{
                int data;
                struct node *prev;
                struct node *next;
        };
        struct node *head,*tail,*newnode,*temp;
        head = 0;
        int choice;
        do{
                newnode = (struct node*) malloc(sizeof(struct node));

                printf("Enter data:");
                scanf("%d",&newnode -> data);
                newnode -> prev = 0;
                newnode -> next = 0;

                if(head == 0){
                        head=temp=tail=newnode;
                }
                else{
                        temp -> next = newnode;
                        newnode -> prev = temp;
                        temp = tail = newnode;
                }
                printf("Do you want to insert another data (1/0)?:");
                scanf("%d",&choice);
        }while(choice);
        temp = head;
        printf("The data in the list are:");
        while(temp != 0){
                printf("%d ,",temp -> data);
                temp = temp -> next;
        }
        printf("\n");

	Insert_at_Beginning();
	Insert_at_End();
	Display();
}

			
