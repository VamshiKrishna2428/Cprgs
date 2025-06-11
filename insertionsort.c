#include<stdio.h>
int main()
{
	int list[100],n,i,x,k;
	printf("Enter how many elements you want to sort\n");
	scanf("%d",&n);
	printf("Enter elements of list\n");
	for(i=0;i<n;i++)
		//scanf("%d",&list[i]);
	{
		scanf("%d",&x);
		k=i-1;
		while(k>=0&&list[k]>x)
		{
			list[k+1]=list[k];
			k--;
		}
		list[k+1]=x;
	}
	printf("The sorted elements after insertion sort are:\n");
	for(i=0;i<n;i++)
		printf("%d, ",list[i]);
}

