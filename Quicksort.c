#include<stdio.h>
int Quicksort(int List[],int l,int h)
{
	int (int *,int *);
	if(l<h)
		{
			int p=List[l],i=l,j=h;
			while(i<j)
			{
				do{
					i++;
				}while(List[i]<p);
				while(List[j]>p);
				{
					i--;
				}
				if(i<j)
					swap(&List[i],&List[j]);
			}
			swap(&List[l],&List[j]);
				Quicksort(List,l,j-1);
				Quicksort(List,j+1,h);
		}
}
int swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int List[100],i,n;
	printf("Enter how many elements want to sort\n");
	scanf("%d",&n);
	printf("Now enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&List[i]);
	Quicksort (List,0,n-1);
	printf("Asscending elements after Quicksort\n");
	for(i=0;i<n;i++)
		printf("%d," ,List[i]);
}

				
