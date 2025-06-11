#include<stdio.h>
void aseries(int x)
{
	if(x<=200)
	{
		printf("%d, ",x);
		aseries(x+3);
	}
}
void main()
{
	printf("The series is:\n");
	aseries(1);
}


