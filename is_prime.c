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
	printf("Enter a number n\n");
	scanf("%d",&n);
	if(is_prime(n))
		printf("%d is a prime number\n",n);
	else
		printf("%d is not a prime number\n",n);
}


