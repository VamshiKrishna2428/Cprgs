#include <stdio.h>
//int multiply_fun(int a,int b);
int main(){
	int multiply_fun(int a,int b);
		int a,b,M;
		printf("Enter a\n");
		scanf("%d",&a);
		printf("Enter b\n");
                scanf("%d",&b);
		M = multiply_fun(a,b);
		printf("Multiplication is:%d\n",M);
		return 0;
}
int multiply_fun(int x,int y){
		return x*y;
}
