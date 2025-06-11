#include<stdio.h>
#include<stdlib.h>

void create_list();
//void reverse_list();

void main(){
	create_list();
	//reverse_list();
}
void create_list(){
	 struct node{
                int data;
                struct node *next;
        };
	struct node *head, *newnode, *temp;
	int choice;
	do{
		newnode = (struct node*) malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d", &newnode -> data);
		newnode->next=0;
		if(head==0){
			temp=head=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to insert another data (1/0)?:");
		scanf("%d", &choice);
	}while(choice);
	printf("The elements in the list are:");
	temp=head;
	while(temp!=0){
		printf("%d, ", temp->data);
		temp=temp->next;
	}
	printf("\n");
}
