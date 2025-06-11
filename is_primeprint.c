#include<stdio.h>
int is_prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			break;
	}
	if(i<=n/2)
		return(0);
	return(1);
}
void main()
{
	int n;
	for(n=2;n<=1000;n++)
		if(is_prime(n))
			printf("%d, ",n);
}

