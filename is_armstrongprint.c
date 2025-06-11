#include<stdio.h>
int is_armstrong(int n)
{
	int p,r,sum=0;
	for(p=n;n!=0;n/=10)
	{
		r=n%10;
		sum=sum+(r*r*r);
	}
	if(p==sum)
		return(1);
	return(0);
}
void main()
{
	int n;
	for(n=1;n<=1000;n++)
		if(is_armstrong(n))
			printf("%d, ",n);
}

