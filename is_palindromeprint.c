#include<stdio.h>
int is_palindrome(int n)
{
	int rev=0,r,p;
	for(p=n;n!=0;n/=10)
	{
		r=n%10;
		rev=(rev*10)+r;
	}
	if(p==rev)
		return(1);
	return(0);
}
void main()
{
	int n;
	for(n=1;n<=1000;n++)
		if(is_palindrome(n))
			printf("%d, ",n);
}

