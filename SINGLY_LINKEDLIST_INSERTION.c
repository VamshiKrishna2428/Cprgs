#include<stdio.h>
#include<stdlib.h>

void CreateList();

void Insert_at_beginning();

void Insert_at_end();

void Insert_at_given_position();

void main(){
	
	CreateList();

	Insert_at_beginning();

	Insert_at_end();

	Insert_at_given_position();
}

void CreateList(){
	struct node{
                int data;
                struct node *next;
        };
	struct node *head,*newnode,*temp;
	head = 0;
	int choice;
	do{
		newnode = (struct node*) malloc(sizeof(struct node));
		printf("Enter data:");
                scanf("%d",&newnode -> data);

                newnode -> next = 0;
                if(head == 0){
                        head = temp = newnode;
                }
                else{
                        temp -> next = newnode;
                        temp = newnode;
                }
                printf("Do U want to insert another data(1/0)?:");
                        scanf("%d",&choice);
        }while(choice);
	 printf("The elements in the list are:");
        temp = head;
        while(temp != 0){
                printf("%d ,", temp -> data);
                temp = temp -> next;
        }
        printf("\n");

}

void Insert_at_beginning(){
	struct node{
		int data;
		struct node *next;
	};
	struct node *head, *newnode, *temp;
	int choice;
	do{
	newnode = (struct node*) malloc(sizeof(struct node));

	printf("Enter data to insert:");
	scanf("%d",&newnode -> data);
	newnode -> next = head;
	head = newnode;
	printf("Do you want insert another data (1/0)?:");
	scanf("%d",&choice);
	}while(choice);
	printf("The elements after Insert_at_beginning are:");
	temp = head;
        while(temp != 0){
                printf("%d ,", temp -> data);
                temp = temp -> next;
        }
        printf("\n");
}

void Insert_at_end(){
	struct node{
		int data;
		struct node *next;
	};
	 struct node *head, *newnode, *temp;
        int choice;
        do{
        newnode = (struct node*) malloc(sizeof(struct node));

        printf("Enter data to insert:");
        scanf("%d",&newnode -> data);
	newnode -> next = 0;
	temp = head;
	while(temp -> next != 0){
		temp = temp -> next;
	}
	temp -> next = newnode;
	printf("Do you want insert another data (1/0)?:");
        scanf("%d",&choice);
        }while(choice);
        printf("The elements after Insert_at_end are:");
        temp = head;
        while(temp != 0){
                printf("%d ,", temp -> data);
                temp = temp -> next;
        }
        printf("\n");
}

void Insert_at_given_position(){
	int i=1,pos,choice;
	struct node{
                int data;
                struct node *next;
        };
         struct node *head, *newnode, *temp;
	 printf("Enter position\n");
	 scanf("%d",&pos);
	 do{
	 temp = head;
	 while(i<pos){
		 temp = temp -> next;
		 i++;
	 }
	 //do{
	 newnode = (struct node*) malloc(sizeof(struct node));
	
        printf("Enter data to insert:");
        scanf("%d",& newnode -> data);
	
	newnode -> next = temp -> next;
	printf("bunty\n");
	temp -> next = newnode;
	printf("bunty\n");

	printf("Do you want insert another data (1/0)?:");
        scanf("%d",&choice);
        }while(choice);
        printf("The elements after Insert_at_given_position are:");
        temp = head;
        while(temp != 0){
                printf("%d ,", temp -> data);
                temp = temp -> next;
        }
        printf("\n");
}



