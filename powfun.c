
#include<stdio.h>
#include<math.h>
int power(int m,int n)
{
	int i;
	long int p=1;
	for(i=1;i<=n;i++)
		p*=m;
	return(p);
}
void main()
{
	int m,n;
	printf("Enter m,n values\n");
	scanf("%d%d",&m,&n);
	printf("%d power %d is %d\n",m,n,power(m,n));
}
