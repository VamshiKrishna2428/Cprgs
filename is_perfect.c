#include<stdio.h>
int is_perfect(int n)
{
	int i,r,sum=0;
	for(i=1;i<=n;i++)
	{
		r=n%i;
		if(r==0)
			sum+=i;
	}
	if (sum==2*n)
		return(1);
	return(0);
}
void main()
{
	int n;
	printf("Enter a number n\n");
	scanf("%d",&n);
	if (is_perfect(n))
		printf("%d is a perfect number\n",n);
	else
		printf("%d is not a perfect number\n",n);
}
