#include<stdio.h>
int fact(int n)
{
	if(n<=1)
		return(1);
	return(n*fact(n-1));
}
void main()
{
	int n;
	printf("Enter a number n\n");
	scanf("%d",&n);
		printf("Factriol of %d is %d\n",n,fact(n));
}
				
