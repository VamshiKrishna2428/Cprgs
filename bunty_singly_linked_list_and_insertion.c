#include<stdio.h>
#include<stdlib.h>

void Create_List();

void Insertion_at_begining();

void Insertion_at_end();

//void Insertion_at_specific_position();

void Display();

void main(){
	Create_List();
	
	Insertion_at_begining();

	Insertion_at_end();

	//Insertion_at_specific_position();
	
	void Display();	

}

 /*void Display(){
	 struct node{
		 int data;
		 struct node *next;
	 };
	struct node *head, *temp;
	temp=head;
        while(temp!=0){
                printf("%d, ", temp-> data);
                temp=temp->next;
        }*/
}

void Create_List(){
	struct node{
		int data;
		struct node *next;
	};
	struct node *head, *temp, *newnode;
	int choice, count;
	head=0;
	do{
		newnode = (struct node*) malloc (sizeof(struct node));
		printf("Enter the data:\n");
		scanf("%d", &newnode -> data);
		newnode -> next = 0;

		if(head==0){
			head = temp = newnode;
		}
		else{
			temp -> next = newnode;
			temp = newnode;
		}

		printf("Do you want to insert another element (0/1):?");
		scanf("%d", &choice);
	} while(choice);
	printf("The elements in the list are:");
 	temp=head;
	while (temp != 0){
		printf("%d ,", temp -> data);
	       temp = temp -> next;
	}
	printf("\n");
}

void Insertion_at_begining(){
	struct node{
		int data;
		struct node *next;
	};

	struct node *head, *newnode, *temp;
	int choice;
	do{
	newnode = (struct node*) malloc(sizeof(struct node));

	printf("Enter data to insert:\n");
	scanf("%d",&newnode -> data);
	newnode -> next = head;
	head = newnode;
	printf("Do you want to insert another element (1/0)?:");
	scanf("%d", &choice);
	}while (choice);
	printf("The elements in the list after Insertion_at_beginging are:");
	temp = head;
	  temp = head;
        while(temp != 0){
                printf("%d , ", temp -> data);
                temp = temp -> next;
        }
	printf("\n");
}

void Insertion_at_end(){
	struct node{
		int data;
		struct node *next;
	};

	struct node *head, *newnode, *temp;
	int choice;
	do{
	newnode = (struct node*) malloc(sizeof(struct node));

	printf("Enter data to insert:\n");
	scanf("%d", &newnode -> data);
	newnode -> next = 0;

	temp = head;
	if(temp -> next !=0){
		temp = temp -> next;
	}
	temp -> next = newnode;

	printf("Do you want to insert another element (1/0)?:\n");
	scanf("%d", &choice);
	}while(choice);
	printf("The elements in the list after Insertion_at_end are:");
	temp = head;
        while(temp != 0){
                printf("%d , ", temp -> data);
                temp = temp -> next;
        }
	printf("\n");
}

