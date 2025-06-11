#include<stdio.h>
void main()
{
        int s,List[100],n,i,ch;
        printf("\n\nEnter the size of the list\n\n");
        scanf("%d",&n);
        printf("\nEnter %d elements of the list\n\n",n);
        for(i=0;i<n;i++)
                scanf("%d",&List[i]);
        do
        {
                printf("\n\nenter the search Element\n\n");
                scanf("%d",&s);

                for(i=0;i<n;i++)
                        if(s==List[i])
                                break;
                if(i<n)
                        printf("\n\n\nThe search element %d is found at %d position\n\n\n",s,i+1);
                else
                        printf("\n\nElement %d Not found\n\n",s);

                printf("Do you wish to search another element(1/0)?\n");
                scanf("%d",&ch);
        }while(ch!=0);
}


