#include <stdio.h>
#include <stdlib.h>

void main(){
	struct node{
		int data;
		struct node *next;
	};
	struct node *head, *newnode, *temp;
	head = 0;
	int choice, count = 0;
	do{
		newnode = (struct node*) malloc(sizeof(struct node));
		printf("Enter data:\n");
		scanf("%d",&newnode -> data);
		newnode -> next = 0;
		if( head == 0){
			head = temp = newnode;
		}
		else{
			temp -> next = newnode;
			temp = newnode;
		}
		printf("Do you wish to enter another data (1/0)?\n");
		scanf("%d",&choice);
	}while(choice);
	printf("The elements in the list are :");
	temp = head;
	while(temp != 0){
		printf("%d ,",temp -> data);
		temp = temp -> next;
		count++;
	}
	printf("\n");
	printf("The number of elements in linked list are:%d\n",count);
}




























