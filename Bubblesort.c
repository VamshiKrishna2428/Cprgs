#include<stdio.h>
void main()
{
        int List[100],n,i,t,j;
        printf("\n\nEnter the size of the list\n\n");
        scanf("%d",&n);
        printf("\nEnter %d elements of the list\n\n",n);
        for(i=0;i<n;i++)
                scanf("%d",&List[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++){
			if(List[j]>List[j+1]){
				t=List[j];
				List[j]=List[j+1];
				List[j+1]=t;
			}
		}
	}
	printf("The Ascending order after bubble sort are:\n");
	for(i=0;i<n;i++)
		printf("%d, ",List[i]);
}


