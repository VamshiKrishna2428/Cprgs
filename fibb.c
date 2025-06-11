#include<stdio.h>
void fibb(int x,int y)
{
	int z=x+y;
	if(z<=10000)
	{
		printf("%d, ",z);
		fibb(y,z);
	}
}
void main()
{
	printf("fibbnoicce series is:\n");
	printf("0,1,");
	fibb(0,1);
}

