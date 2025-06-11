#include<stdio.h>
int armstrong(int n)
{
	int r,sum=0,p;
	for (p=n;n!=0;n/=10)
	{
		r=n%10;
		sum=sum+(r*r*r);
	}
	if(p==sum)
		return(1);
	return(0);
}
int main()
{
	int n;
	printf("Enter a number n\n");
	scanf("%d",&n);
	if(armstrong(n))
	{
		printf("It is a armstrong\n");
	}
	else{
		printf("It is not a armstrong\n");
	}
}

