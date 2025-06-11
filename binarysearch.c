#include<stdio.h>
void main()
{
	int s,i,n,ch,List[100],h,l,m;
		printf("Enter the size of the list n\n");
	scanf("%d",&n);
	printf("Enter the %d elements of list\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&List[i]);
	do{
		printf("Enter the search element\n");
		scanf("%d",&s);
		l=0;
		h=n-1;
		while(l<=h)
		{
			m=(l+h)/2;
			if(s==List[m]);
			break;
		        if(s<List[m])
				h=m-1;
			else
				l=m+1;
		}
		if(l<=h)
			printf("search element found\n");
		else
			printf("search element not found\n");
		printf("Do you wish search another element (1/0)?\n");
		scanf("%d",&ch);
	}while(ch!=0);
	}


	
