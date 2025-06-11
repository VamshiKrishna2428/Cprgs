#include <stdio.h>

int main(){
	int arr[50],size,i;
	printf("Enter the size of the array:\n");
	scanf("%d",&size);
	if(size>50){
		printf("Invalid size\n");
	}else{
	printf("Insert the elements in array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array elements are:");
	for(i=0;i<size;i++){
		printf("%d ,",arr[i]);
	}
	printf("\n");
	int pos,num;
	printf("Enter the number you want to insert:");
	scanf("%d",&num);
	printf("Enter the position you want to insert:");
	scanf("%d",&pos);
	if(pos<=0 || pos>=size+1){
		printf("Invalid position\n");
	}else{
		for(i=size-1;i>=pos-1;i--){
			arr[i+1] = arr[i];
		}
		arr[pos-1] = num;
		size++;
	}
		printf("The array elements after insertion are:");
		for(i=0;i<size;i++){
			printf("%d,",arr[i]);
		}
		printf("\n");
	}
	{
	int pos;
	printf("Enter the position you want to delete a element:");
	scanf("%d",&pos);
	if(pos<=0 || pos>size){
	       printf("Deletion not possible:");
	}else{
		for(i=pos-1;i<size;i++){
			arr[i] = arr[i+1];
		}size--;
		printf("The array elements after deletion are:");
                for(i=0;i<size;i++){
                        printf("%d,",arr[i]);
                }
                printf("\n");
        }
	}			
}



















