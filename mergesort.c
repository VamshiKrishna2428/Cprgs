#include<stdio.h>
int mergesort(int A[],int l, int m,int h)
{
	int B[100],i=l,j=h,k=l;
	while(i<=m && j<=h)
	{
		if(A[i]<A[j])
			B[k++]=A[i++];
		else
			B[k++]=A[j++];
	}
	while(i<=m)
		B[k++]=A[i++];
	while(j<=h)
                B[k++]=A[j++];
	for(i=l;i<=h;i++)
		A[i]=B[i];
}
void split (int A[],int l,int h)
{
	int m;
	if (l<h)
	{
		m=(l+h)/2;
		split(A,l,m);
		split(A,m+1,h);
		mergesort(A,l,m,h);
	}
}
void main()
{
	int List[100],n,i;
	printf("Enter how many elements you want to sort\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&List[i]);
	split(List,0,n-1);
	printf("After merge sort elements are:\n");
	for(i=0;i<n;i++)
		printf("%d, ",List[i]);
}

