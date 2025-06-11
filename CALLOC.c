#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i,sum=0;
	printf("Enter the size\n");
	scanf("%d",&n);
	ptr= (int*) calloc (5,n);
			if(ptr==NULL)
			{
			printf("Sorry! unable to allocate memory\n");
			//exit(0);
			} 
			else 
			{
			printf("Sure! allocating memory\n");
			}
			printf("Enter elements of array:\n");
			for(i=0;i<n;i++)
			{
			scanf("%d",ptr+i);
			sum=sum+*(ptr+i);
			}
			printf("sum = %d\n",sum);
			free(ptr);
			//return(0);
}



