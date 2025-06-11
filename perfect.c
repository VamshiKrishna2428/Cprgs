#include<stdio.h>
int perfect(int n)
{
	int r,sum=0,i;
	for(i=1;i<=n/2;i++)
	{
		r=n%i;
		if(r==0)
		{
			sum=sum+i;
		}
	}
		if(sum==n)
			return (1);
		return(0);
}
int main()
{
	int n;
	for(n=1;n<=1000;n++)
	{
		if(perfect(n))
			printf("%d, ",n);
	}
}
