#include<stdio.h>
int GCD(int m,int n)
{	
	int r;
	r=m%n;
	if (r==0)
		return(n);
	return(GCD(n,r));
}
void main()
{
	int m,n;
	printf("Enter any two numbers\n");
	scanf("%d%d",&m,&n);
	printf("GCD is:\n",m,n,GCD(m,n));
}
