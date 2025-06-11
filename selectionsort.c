#include<stdio.h>
int main()
{
        int List[100],n,i,j,t;
        printf("Enter how elements want to sort\n");
        scanf("%d",&n);
        printf("Enter elements of list\n");
        for(i=0;i<n;i++)
                scanf("%d",&List[i]);
        for(i=0;i<n-1;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(List[i]>List[j])
                        {
                                t=List[i];
                                List[i]=List[j];
                                List[j]=t;
                        }
                }
        }
        printf("The Assending order after selection sort are:\n");
        for(i=0;i<n;i++)
                printf("%d, ",List[i]);
}     
