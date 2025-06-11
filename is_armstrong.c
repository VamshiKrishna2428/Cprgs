#include<stdio.h>
int is_armstrong(int n)
{
	int sum=0,p,r;
	for(p=n;n>0;n/=10)
	{
		r=n%10;
		sum+=(r*r*r);
	}
	if (p==sum)
		return(1);
	return(0);
}
void main()
{
	int n;
	printf("Enter a number n\n");
	scanf("%d",&n);
	if (is_armstrong(n))
		printf("%d is a armstrong\n",n);
	else
		printf("%d is not a armstrong\n",n);
}

