#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n);
	if(ptr==NULL){
		printf("Sorry! unable to allocate memory");
		exit(0);
	}
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum = %d\n",sum);
	free(ptr);
	return(0);
}
