#include<stdio.h>
int palindrome(int n)
{
	int p,r,rev=0;
	    for(p=n;n!=0;n/=10)
	    {
		    r=n%10;
	    rev=(rev*10)+r;
	    }
	    if(rev==p)
		    return(1);
	    return(0);
}
int main()
{
	int n;
	printf("Enter a number n\n");
	scanf("%d",&n);
	if(palindrome(n))
	{
		printf("it is a palindrome\n");
	}
	else{
		printf("it is not a palindrome\n");
	}
}
			    

