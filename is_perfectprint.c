#include<stdio.h>
int is_perfect(int n)
{
	int r,i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		r=n%i;
		if(r==0)
			sum+=i;
	}
	if(sum==n)
		return(1);
	return(0);
}
void main()
{
	int n;
	for(n=1;n<=10000;n++)
		if(is_perfect(n))
			printf("%d, ",n);
}


