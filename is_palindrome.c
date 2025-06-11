#include<stdio.h>
int is_palindrome(int n)
{
       	int p,r,rev=0;
	for(p=n;n>0;n/=10)
       {
	       r=n%10;
		rev=(rev*10)+r;
	}
	{
	if(p==rev)
		return(1);
	else
		return(0);
       }
}
void main()
{
	int n;
	printf("Enter a number n\n");
	scanf("%d",&n);
	if (is_palindrome(n))
                printf("%d is a palindrome",n);
	else
 		printf("%d is not a palindrome",n);
}
