#include <stdio.h>

void calc(int a,int b,int *sum,int *prod,int *avg);

int main(){
	int a,b;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
        scanf("%d",&b);

	int sum,prod,avg;
	calc(a,b,&sum,&prod,&avg);
	printf("sum is:%d\n,prod is:%d\n,avg is:%d\n",sum,prod,avg);
}
void calc(int a,int b,int *sum,int *prod,int *avg){
	*sum = a+b;
	*prod = a*b;
	*avg = (a+b)/2;
	printf("sum is:%d\n,prod is:%d\n,avg is:%d\n",*sum,*prod,*avg);
}
